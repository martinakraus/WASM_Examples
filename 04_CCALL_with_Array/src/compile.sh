#!/usr/bin/env bash
emcc addNumbers.c -o addNumbers.js -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall"]'
