#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;

  printf("Input variabel a: ");
  scanf("%d",&a );

  printf("Input variabel b: ");
  scanf("%d",&b );

  printf("\n");

  if (a > b) {
    printf("Variabel a lebih besar dari variabel b \n");
  }
  if (a < b) {
    printf("Variabel a lebih kecil dari variabel b \n");
  }
  if (a == b) {
    printf("Variabel a sama dengan variabel b \n" );
  }
  
  return 0;
}
