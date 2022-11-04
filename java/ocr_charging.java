package com.baidu.paddle.lite.demo.ocr;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.graphics.Bitmap;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Point;
import android.telephony.SmsManager;
import android.util.Log;
import android.widget.Toast;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStream;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Calendar;
import java.util.Date;
import java.util.List;
import java.util.Vector;

import static android.graphics.Color.*;

public class Predictor {
    public boolean isNowSendMsgHours(Calendar calendar, List<Integer> sendMsgHours) {
        int current_hour = calendar.get(Calendar.HOUR_OF_DAY);

        for (int i = 0; i < sendMsgHours.size(); i++) {
            if (current_hour == sendMsgHours.get(i)) {
                return true;
            }
        }

        return false;
    }

    public String getLogFileName(Date date, String s) {
        String d = new SimpleDateFormat("yyyy-MM-dd-HH").format(date);
        return "/sdcard/充电/" + d + "-" + s + ".log";
    }


    public String getTypeByChargingState(boolean isCharging) {
        if (isCharging) {
            return "success";
        } else {
            return "fail";
        }
    }

    public void createLogFile(Date date, boolean isCharging) {
        try {
            String s = getTypeByChargingState(isCharging);
            String log_filename = getLogFileName(date, s);

            File f = new File(log_filename);
            if (f.createNewFile())
                System.out.println("File created");
            else
                System.out.println("File already exists");
        } catch (Exception e) {
        }
    }

    public static boolean isInteger(String strNum) {
        if (strNum == null) {
            return false;
        }
        try {
            int d = Integer.parseInt(strNum);
        } catch (NumberFormatException nfe) {
            return false;
        }
        return true;
    }

    public List<Integer> readIntegerLines(String filePath) {
        List<Integer> res = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                // process the line.
                line = line.trim();
                if (isInteger(line)) {
                    res.add(Integer.parseInt(line));
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return res;
    }

    public List<String> readStringLines(String filePath) {
        List<String> res = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = br.readLine()) != null) {
                // process the line.
                line = line.trim();
                if (!line.isEmpty()) {
                    res.add(line);
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return res;
    }

    public List<Integer> getSendMessageHours(String filePath) {
        return readIntegerLines(filePath);
    }

    public List<String> getPhoneListFromFile(String filePath) {
        return readStringLines(filePath);
    }


    public boolean isFileExist(String filepath) {
        File f = new File(filepath);
        if (f.isFile()) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isSendMsg(Calendar calendar, Date date, boolean isCharging, List<Integer> sendMessageHours) {
        if (!isNowSendMsgHours(calendar, sendMessageHours)) {
            //现在不是发短信的时间
            return false;
        }
        //以下是可以发送短信的时间
        String type = getTypeByChargingState(isCharging);

        if (isCharging) {
            //充电中，仅在每小时的50~59发短信
            int current_minute = calendar.get(Calendar.MINUTE);
            if (current_minute < 50) {
                // 0~49 不发送短信
                return false;
            }
        }

        //判断文件是否存在，存在说明发过短信，不应该再发
        String logFilePath = getLogFileName(date, type);
        if (isFileExist(logFilePath)) {
            return false;
        }

        return true;
    }

    public void sendMessageToPhoneList(List<String> phoneList, String message) {
        if (message.isEmpty()) {
            return;
        }
        if (phoneList == null) {
            return;
        }
        if (phoneList.size() == 0) {
            return;
        }
        for (String phone : phoneList) {
            sendSMS(phone, message);
        }
    }

    private void drawResults(ArrayList<OcrResultModel> results) {

        List<String> keywords = readStringLines("/sdcard/充电/keywords.conf");
        if (keywords.size() == 0) {
            keywords.add("车辆");
            keywords.add("向盘");
            keywords.add("功率");
            keywords.add("否则");
            keywords.add("离开");
            keywords.add("满时");
        }

        StringBuffer outputResultSb = new StringBuffer("");
        int match_count = 0;

        for (int i = 0; i < results.size(); i++) {
           if (result.getLabel().length() > 0) {
                String sentence = result.getLabel();
                for (String keyword : keywords) {
                    if (sentence.contains(keyword)) {
                        match_count++;
                    }
                }
            }
       }
        Calendar calendar = Calendar.getInstance();
        Date date = calendar.getTime();

        List<Integer> sendMessageHours = getSendMessageHours("/sdcard/充电/可以发送短信的小时数.conf");
        if (sendMessageHours.size() == 0) {
            //没有配置的话， 一般21点，22点，23点，0点，1点还没有睡
            sendMessageHours.add(21);
            sendMessageHours.add(22);
            sendMessageHours.add(23);
            sendMessageHours.add(0);
            sendMessageHours.add(1);
        }

        boolean isCharging = match_count > 0;
        boolean isSend = isSendMsg(calendar, date, isCharging, sendMessageHours);

        if (isSend) {
            String t = new SimpleDateFormat("yyyy-MM-dd HH:mm").format(date);
            String msgContent;
            String phoneListFilePath;

            if (isCharging) {
                msgContent = "车正常在充电，请放心。" + t;
                phoneListFilePath = "/sdcard/充电/成功手机号列表.conf";
                sendSMS("10086", "HFSJLL");//恢复数据流量，免费短信
            } else {
                msgContent = "充电停了，去看看吧。如果确认已完成充电，请忽略！！" + t;
                phoneListFilePath = "/sdcard/充电/失败手机号列表.conf";
                sendSMS("10086", "ZTSJLL"); //暂停数据流量，免费短信
            }
            List<String> phoneList = getPhoneListFromFile(phoneListFilePath);

            sendMessageToPhoneList(phoneList, msgContent);
            createLogFile(date, isCharging); //创建文件，标识已发送过短信
        }


    }

    public void sendSMS(String phoneNumber, String message) {
        SmsManager smsManager = SmsManager.getDefault();
        List<String> divideContents = smsManager.divideMessage(message);
        for (String text : divideContents) {
            smsManager.sendTextMessage(phoneNumber, null, text, null, null);
        }
    }

}

