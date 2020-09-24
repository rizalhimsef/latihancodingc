#include <stdio.h>

int main(int argc, char const *argv[]) {
  char nama[20];
  printf("Wanita yang dipikirkanmu saat ini: ");
  gets(nama);

  printf("\n");
  printf("Yang sedang saya pikirkan saat ini adalah %s \n", nama);
  return 0;
}
