#include <stdio.h>

int main(void)
{
  float angka1 = 1234.5678;

  printf("Isi variabel angka1: %f \n", angka1);
  printf("Isi variabel angka1: %15f \n", angka1);
  printf("Isi variabel angka1: %015f\n", angka1);
  printf("Isi variabel angka1: %.3f \n", angka1);
  printf("Isi variabel angka1: %010.3f \n", angka1);

  printf("Isi variabel angka1: %e \n", angka1);
  printf("Isi variabel angka1: %E \n", angka1);

  printf("\n" );
  return 0;
}
