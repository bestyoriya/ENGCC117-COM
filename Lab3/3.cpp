#include <stdio.h>

typedef struct {
  int x;
  int y;
} Point;

void printPoint(Point m) {
  printf("(%d, %d)\n", m.x, m.y);
}

int main() {
    
  Point m = {2, 4};
  printPoint(m);

  return 0;
}//end function
