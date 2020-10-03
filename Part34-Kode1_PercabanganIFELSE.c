#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  printf("Input angka: ");
  scanf("%d",&a );

  printf("\n" );

  if (a % 2 == 0) {
    printf("%d adalah angka genap \n",a );
  } else {
    printf("%d bukan angka genap \n",a );
  }
  return 0;
}
