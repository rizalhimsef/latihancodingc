#include <stdio.h>

int main(int argc, char const *argv[]) {
  if (1) {
    printf("Ini akan ditampilkan ....\n");
  }
  if (30) {
    printf("ini juga akan ditampilkan...\n" );
  }
  if (-8) {
    printf("Ini juga tetap akan ditampilkan...\n");
  }
  if ('A') {
    printf("Ini juga tetap akan masih ditampilkan...\n");
  }
  if (0) {
    printf("Ini tidak akan tampil...\n");
  }
  return 0;
}
