#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  a = (0 && 1) || (1 || 0);
  printf("Kebenaran variabel a: %d \n",a );

  int b;

  b = !0 && (0 || 1);
  printf("Kebenaran variabel b: %d \n",b );

  int c;

  c = ((1 && 1) || (1 || 0)) && !1;
  printf("Kebenaran variabel c: %d \n",c );

  return 0;
}
