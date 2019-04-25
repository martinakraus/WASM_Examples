#!/usr/bin/env bash
emcc \
    -o app.html asteroids/*.c \
    -s USE_SDL=2
