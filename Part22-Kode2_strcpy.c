#include <stdio.h>

int main(int argc, char const *argv[]) {
  char cinta[40];

  strcpy(cinta, "Anugrah Widi Lestari");
  printf("Siapa nama Istrimu? %s \n", cinta);

  strcpy(cinta, "Manis, Manja, Solehah");
  printf("Deskripsikan dia dengan tiga kata! %s \n", cinta);

  strcpy(cinta, "Sayang BANGETTTTT!");
  printf("Bagaimana perasaan kamu sekarang sama dia? %s \n", cinta);
  return 0;
}
