#include <stdio.h>

struct DataDiri{
  char  nama[50];
  char  alamat[50];
  unsigned int umur;
};

int main(int argc, char const *argv[]) {
  struct DataDiri pacar01;

  printf("==++ Masukkan Data Pacar Anda ++==\n" );
  printf("\n" );

  printf("Nama: " );
  gets(pacar01.nama);

  printf("Alamat: " );
  gets(pacar01.alamat);

  printf("Umur: " );
  scanf("%i",&pacar01.umur );

  printf("Hasil: \n" );

  printf("%s beralamat di %s", pacar01.nama, pacar01.alamat );
  printf(" dan berumur %i tahun \n", pacar01.umur );
  return 0;
}
