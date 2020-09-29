#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  bool a,b;
  a = true;
  b = false;

  if (a) {
    printf("Pesan ini akan ditampilkan...\n" );
  }
  if (b) {
    printf("Pesan ini tidak akan ditampilkan...\n" );
  }
  return 0;
}
