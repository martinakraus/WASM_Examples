#!/usr/bin/env bash
emcc src/fibonacci.c -o app.js -s EXTRA_EXPORTED_RUNTIME_METHODS='["cwrap"]'
