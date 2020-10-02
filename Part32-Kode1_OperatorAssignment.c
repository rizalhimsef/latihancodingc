#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a, b, c, d, e;

  a = 4;
  b = 10;
  b = b - 6;
  c = (a + 1) + b;
  d = c + c + (a + 1);
  e = (c + d)*(a + 1);

  printf("Hasil variabel a = %d \n",a );
  printf("Hasil variabel b = %d \n",b );
  printf("Hasil variabel c = %d \n",c );
  printf("Hasil variabel d = %d \n",d );
  printf("Hasil variabel e = %d \n",e );

  return 0;
}
