#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a;

  printf("Input nilai ujian: ");
  scanf("%d",&a);

  printf("\n" );
  if (a >= 75) {
    printf("Selamat anda lulus dengan nilai: %d \n",a );
  } else {
    printf("Maaf nilai %d belum memenuhi syarat kelulusan \n",a );
  }
  return 0;
}
