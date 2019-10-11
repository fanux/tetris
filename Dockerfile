# Make Tetris game
FROM debian:buster AS build-tetris

RUN apt update && \
    apt install -y g++ git libc6-dev && \
    git clone https://github.com/fanux/tetris.git && \
    cd tetris/src && \
    g++ *cpp /usr/lib/x86_64-linux-gnu/libpthread.a /usr/lib/x86_64-linux-gnu/libc_nonshared.a /usr/lib/x86_64-linux-gnu/libc.a -o game -static && \
    mv game game-tetris && \
    cp game-tetris /

# Exec game
FROM busybox

COPY --from=build-tetris /game-tetris /bin

ENTRYPOINT game-tetris

