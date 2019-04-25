# Asteroids 

This is a WebAssembly port of an [Asteroids game written in C](https://github.com/flightcrank/asteroids):

![Screenshot of asteroids game](https://raw.githubusercontent.com/robertaboukhalil/wasm-asteroids/master/screenshot.png)

If you're looking for a practical guide to learning WebAssembly, check out my book [Level up with WebAssembly](http://www.levelupwasm.com/).


Compile it to WebAssembly:

```bash
emcc \
    -o app.html asteroids/*.c \
    -Wall -g -lm \
    -s USE_SDL=2
```
