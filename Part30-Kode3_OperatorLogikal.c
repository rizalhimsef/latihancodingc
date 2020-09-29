#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  a = (5 > 4) && (10 > 9);
  printf("(5 > 4) && (10 > 9): %d \n",a );

  int b;

  b = (15 <= 15) && (15 < 15);
  printf("(15 <= 15) && (15 < 15): %d \n",b );

  int c;

  c = ('a' == 'a') || ('a' == 'b');
  printf("'a' == 'a' || ('a' == 'b'): %d \n",c );

  int d;
  
  d = (10 > 7) && ('rizal' == 'rizal');
  printf("(10 > 7) && ('riza' == 'rizal'): %d \n",d );
  return 0;
}
