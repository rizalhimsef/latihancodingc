#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a;
  printf("Coba input angka: ");
  scanf("%d",&a );

  if (a % 2 == 0) {
    printf("%d merupakan angka genap \n",a );
  }
  else{
    printf("%d bukan merupakan angka genap \n",a );
  }
  return 0;
}
