#include <stdio.h>
#include <float.h>
int main(void)
{
  printf("Ukuran memori untuk tipe data float: %d byte \n", sizeof(float));
  printf("Ukuran memori untuk tipe data double: %d byte \n", sizeof(double));
  printf("\n" );

  printf("Nilai maksimum tipe data float: %E \n", FLT_MAX);
  printf("Nilai minimum tipe data float: %E \n", FLT_MIN);
  printf("\n" );

  printf("Nilai maksimum tipe data double: %E \n", DBL_MAX);
  printf("Nilai minimum tipe data double: %E \n", DBL_MIN);
  printf("\n" );

  printf("Ketelitian float: %d digit \n", FLT_DIG);
  printf("Ketelitian double: %d digit \n", DBL_DIG);

  printf("\n" );
  return 0;
}
