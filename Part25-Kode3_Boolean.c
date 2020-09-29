#include <stdio.h>

#define true 1
#define false 0

int main(int argc, char const *argv[]) {
  if (true) {
    printf("Pesan ini akan ditampilkan...\n" );
  }
  if (false) {
    printf("Pesan ini tidak akan ditampilkan...\n");
  }
  return 0;
}
