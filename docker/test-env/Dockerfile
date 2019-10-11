FROM hub.xiaojukeji.com/jameschenjili/devbase:v1

ENV STR1 hello
ENV STR2 world 
ENV PATH_TO_PRINT /root

RUN ls $PATH_TO_PRINT
CMD echo $STR1 $STR2


#docker build -t test-env ./
#docker run -e STR1=abc -e STR2=def test-env 

#ENV的使用
#可以传递到容器中，也可以覆盖Dockerfile中定义的常量
