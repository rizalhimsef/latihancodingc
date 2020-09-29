#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  a = 5 == 5;
  printf("Isi variabel a: %d \n",a );

  a = 5 != 5;
  printf("Isi variabel a: %d \n",a );

  a = 5 > 5;
  printf("Isi variabel a: %d \n",a );

  a = 5 >= 5;
  printf("Isi variabel a: %d \n",a );

  a = 5 < 5;
  printf("Isi variabel a: %d \n",a );

  a = 5 <= 5;
  printf("Isi variabel a: %d \n",a );

  return 0;
}
