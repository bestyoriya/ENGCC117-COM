#include <stdio.h>

struct example_struct {
  int a;
  float b;
  char c;
};

void function(struct example_struct example) {
  printf("a = %d\n", example.a);
  printf("b = %f\n", example.b);
  printf("c-  %c\n", example.c);
}

int main() {
  struct example_struct example = {a: 1, b: 4, c: 'A'};

  function(example);

  return 0;
}//end function
