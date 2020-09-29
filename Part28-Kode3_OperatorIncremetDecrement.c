#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 5;
  printf("Post Increment \n");
  printf("Isi variabel a: %d \n",a );
  printf("Isi variabel a: %d \n",a++ );
  printf("Isi variabel a: %d \n",a );

  printf("\n" );

  int b = 5;
  printf("Pre Increment \n" );
  printf("Isi variabel a: %d \n",b );
  printf("Isi variabel a: %d \n",++b );
  printf("Isi variabel a: %d \n",b );

  return 0;
}
