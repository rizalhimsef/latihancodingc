#include <stdio.h>

typedef unsigned int angkaBulatPositif;
typedef float angkaPecahan;

int main(int argc, char const *argv[]) {
  angkaBulatPositif a;
  angkaPecahan b;

  a = 123456;
  printf("Isi variabel a: %d \n",a );

  b = 2.4513;
  printf("Isi variabel b: %.2f \n",b );
  return 0;
}
