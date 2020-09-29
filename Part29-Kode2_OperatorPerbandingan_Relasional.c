#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  a = 'a' == 'a';
  printf("Isi variabel a: %d \n",a );

  a = 'A' != 'B';
  printf("Isi variabel a: %d \n",a );

  a = "Rizal" == "rizal";
  printf("Isi variabel a: %d \n",a );

  a = 'A' > 'B';
  printf("Isi variabel a: %d \n",a );
  return 0;
}
