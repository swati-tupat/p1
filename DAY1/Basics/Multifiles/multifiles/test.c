#include "fun.h"
#include <stdio.h>
int main() {
  int a, b, c, d,e,f1;
  a = 1;
  b = 20;
  e = 20;
  c = sum(a, b ,e);
  d = square(a);
  f1 = fact(a);
  //prod(c,d);
  printf("c=%d,d=%d,f1=%d\n",c,d,f1);
  return 0;
}