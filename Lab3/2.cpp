#include <stdio.h>

struct person {
  char name[10];
  int age;
};

void print_person(struct person *m) {
  printf("Name: %s\n Age: %d\n", m->name, m->age);
}

int main() {

  struct person m = {"Best", 19};
  print_person(&m);

  return 0;
}//end function