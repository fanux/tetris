# Make Tetris game
FROM debian:buster AS build-tetris

RUN apt update && \
    apt install -y g++ git && \
    git clone https://github.com/fanux/tetris.git && \
    cd tetris/src && \
    g++ *cpp -o game && \
    mv game game-tetris && \
    cp game-tetris /

# Exec game
FROM debian:buster-slim

COPY --from=build-tetris /game-tetris /bin

ENTRYPOINT game-tetris
