#include <stdio.h>
int main (void)
{
  int a,b,c;

  a = 13;
  b = a;
  a = a + b;
  c = b + b + a;

  printf("%i", a);
  printf("\n");

  printf("%i", b);
  printf("\n");

  printf("%i", c);
  printf("\n");

  return 0;
}
