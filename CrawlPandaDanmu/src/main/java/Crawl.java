import org.json.JSONArray;
import org.json.JSONObject;
import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.Socket;
import java.util.List;


public class Crawl extends Thread {

    //获取弹幕需要发送的内容
    private String rid;
    private String appid;
    private String k = "1";
    private String t = "300";
    private String ts;
    private String sign;
    private String authType;

    //与弹幕服务器联系的socket
    private Socket socket;
    //弹幕服务器ip
    private String serverIp;
    //弹幕服务器端口
    private int port;

    /**
     *
     * @return 返回结果表示是否初始化成功
     * @throws IOException
     */
    public boolean init() throws IOException {
        System.out.println("获取登录信息");
        String roomId = Utils.getRoomId();
        String time = String.valueOf(System.currentTimeMillis());

        String url1 = "http://api.m.panda.tv/ajax_chatinfo?roomid=" + roomId + "&_=" + time;
        Document doc1 = Jsoup.connect(url1).header("User-Agent","Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/46.0.2490.86 Safari/537.36").ignoreContentType(true).get();
        JSONObject jsonObject1 = new JSONObject(doc1.toString().split("<body>",2)[1].split("</body>",2)[0]);


        int errno = jsonObject1.getInt("errno");
        if (errno != 0) {
            System.out.println("-----------------------");
            System.out.println("第一步获取数据出错,程序将退出");
            System.out.println("url:" + url1);
            System.out.println("json数据:");
            System.out.println(jsonObject1);
            System.out.println("-----------------------");
            return false;
        } else {
            JSONObject j = jsonObject1.getJSONObject("data");
            this.sign = j.getString("sign");
            this.appid = j.getString("appid");
            this.rid = String.valueOf(j.getLong("rid"));
            this.ts = String.valueOf(j.getLong("ts"));
            this.authType = String.valueOf(j.getLong("authtype"));
            JSONArray chat_addr_list = j.getJSONArray("chat_addr_list");
            for (Object o:chat_addr_list) {
                serverIp = ((String) o).split(":",2)[0];
                port = Integer.valueOf(((String) o).split(":", 2)[1]);
                break;
            }
        }

        return true;
    }

    /**
     * 与弹幕服务器取得联系,相当于登录弹幕服务器
     */
    public void login() throws IOException, InterruptedException {
        socket = new Socket(serverIp,port);
        System.out.println("登录弹幕服务器:" + serverIp + ":" + port);
        String msg = "u:" + rid + "@" + appid + "\n" +
                "k:" + k + "\n" +
                "t:" + t + "\n" +
                "ts:" + ts + "\n" +
                "sign:" + sign + "\n" +
                "authtype:" + authType;
        ByteArrayOutputStream byteArray = new ByteArrayOutputStream();
        byte[] b = new byte[]{0x00, 0x06, 0x00, 0x02, 0x00, (byte) msg.length()};
        byteArray.write(b);

        byteArray.write(msg.getBytes("ISO-8859-1"));
        OutputStream outputStream = socket.getOutputStream();
        outputStream.write(byteArray.toByteArray());

        //b = new byte[]{0x00, 0x06, 0x00, 0x00};
        //outputStream.write(b);
    }

    @Override
    public void run() {
        MessageHandler messageHandler = null;
        OutputStream outputStream;

        try {
            //初始化失败
            if (!init()) {
                return;
            }
            login();
            System.out.println("----------------------------");

            messageHandler = new MessageHandler(socket);
            outputStream = socket.getOutputStream();

            long start = System.currentTimeMillis();
            while (true) {
                List<String> msgs = messageHandler.read();
                for (String s:msgs) {
                    if (s.equals("")) {
                        continue;
                    }
                    String type = s.split("\\{\"type\":\"",2)[1].split("\"",2)[0];
                    //发言弹幕
                    if (type.equals("1")) {
                        String nickname = s.split("nickName\":\"",2)[1].split("\"")[0];
                        String content = s.split("content\":\"",2)[1].split("\"",2)[0];
                        System.out.println("[" + nickname + "]:" + content);
                    }
                }

                long end = System.currentTimeMillis();
                //心跳包
                if (end - start > 60000) {
                    outputStream.write(new byte[]{0x00, 0x06, 0x00, 0x00});
                    start = System.currentTimeMillis();
                }

                Thread.sleep(1);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            try {
                messageHandler.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
}
