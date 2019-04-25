#include <emscripten.h>

// Example for calling JavaScript inside a C program
int main()
{
  EM_ASM(
    alert('hello world!');
  );

  EM_ASM_({
    console.log('I received: ' + $0);
  }, 100);
  return 0;
}
