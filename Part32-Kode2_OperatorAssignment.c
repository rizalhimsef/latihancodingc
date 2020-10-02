#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10, b = 10, c = 10, d = 10, e = 10, f = 10;

  printf("Operator assignment gabungan bahasa C \n" );
  printf("===================================== \n" );
  printf("variabel a, b ,c , d, e, f = 10 \n \n" );

  a += 5;
  printf("Hasil operasi 'a += 5' : %d \n",a );

  b -= 3;
  printf("Hasil operasi 'b -= 3' : %d \n",b );

  c *= 3;
  printf("Hasil operasi 'c *= 3' : %d \n",c );

  d /= 3;
  printf("Hasil operasi 'd /= 3' : %d \n",d );

  e %= 3;
  printf("Hasil operasi 'e %= 3' : %d \n",e );

  f <<= 2;
  printf("Hasil operasi 'f <<= 2' : %d \n",f );

  return 0;
}
