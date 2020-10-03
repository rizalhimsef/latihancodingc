#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  printf("Input angka sembarang: ");
  scanf("%d",&a );

  printf("\n" );

  if (a % 2 == 0) {
    printf("%d adalah angka genap\n", a);
  }
  if (a % 2 == 1) {
    printf("%d adalah angka ganjil\n", a);
  }
  return 0;
}
