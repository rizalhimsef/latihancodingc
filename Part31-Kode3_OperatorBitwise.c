#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b, hasil;

  a = 181;
  b = 108;

  printf("== Operator Bitwise Bahasa C == \n\n");

  hasil = a & b;
  printf("a & b: %d \n",hasil );

  hasil = a | b;
  printf("a | b: %d \n",hasil );

  hasil = a ^ b;
  printf("a ^ b: %d \n",hasil );

  hasil = ~a;
  printf("~a: %d \n",hasil );

  hasil = a >> 1;
  printf("a >> 1: %d \n",hasil );

  hasil = b << 2;
  printf("b << 2: %d \n",hasil );
  return 0;
}
