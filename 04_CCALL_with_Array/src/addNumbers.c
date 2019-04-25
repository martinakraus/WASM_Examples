#include <emscripten.h>

float EMSCRIPTEN_KEEPALIVE addNums (float *buffer, int bufSize)
{
    float total = 0;

    for (int i=0; i<bufSize; i++) {
        total+= buffer[i];
    }

    return total;
}
