#include <stdio.h>

int main(int argc, char const *argv[]) {
  int bilangan[5];

  bilangan[0] = 6;
  bilangan[1] = 10;
  bilangan[2] = -4;
  bilangan[3] = 32;
  bilangan[4] = -23;

  printf("Isi array bilangan pertama: %d \n", bilangan[0] );
  printf("Isi array bilangan kedua: %d \n", bilangan[1]);
  printf("Isi array bilangan ketiga: %d \n",bilangan[2] );
  printf("Isi array bilangan keempat: %d \n",bilangan[3] );
  printf("Isi array bilangan kelima: %d \n",bilangan[4] );

  return 0;
}
