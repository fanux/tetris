FROM centos:latest
COPY . .
RUN set -x && yum -y update && yum -y install gcc-c++ 
RUN  cd ./src && g++ *cpp -o game -pthread -g && cp game /bin
CMD /bin/bash
