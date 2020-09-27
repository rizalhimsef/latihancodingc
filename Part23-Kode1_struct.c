#include <stdio.h>

struct Pacar
  {
    char nama[50];
    char alamat[50];
    unsigned int Umur;
  };
int main(int argc, char const *argv[]) {
  struct Pacar pacar01;

  strcpy(pacar01.nama, "Anugrah Widi Lestari");
  strcpy(pacar01.alamat, "Purbalingga");
  pacar01.Umur = 21;

  printf("%s beralamat di %s", pacar01.nama, pacar01.alamat );
  printf(" dengan umur %i \n", pacar01.Umur);

  return 0;
}
