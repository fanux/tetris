## Your star is my power :rocket: :star: :star: :star: :star: :star:
![](https://github.com/fanux/tetris/blob/master/img/tetris.png?raw=true)
## Build
```
$ cd src && make
$ ./game
$ g++ --version
g++ (GCC) 4.8.5 20150623 (Red Hat 4.8.5-4)
$ uname -a
Linux docker-86-106 3.10.0-327.22.2.el7.x86_64 #1 SMP Thu Jun 23 17:05:11 UTC 2016 x86_64 x86_64 x86_64 GNU/Linux
```
## Ship on docker
```
$ docker build -t tetris:latest .
$ docker run -it tetris:latest /bin/bash
```
Then you will enter the tetris container.

run game:
```
$ game
```
Thats all

Alternative:
```
$ docker run -it fanux/tetris:latest /bin/bash
# game
```

Play well in iTerm
