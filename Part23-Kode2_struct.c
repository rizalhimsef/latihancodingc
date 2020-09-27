#include <stdio.h>

struct MantanPacar{
  char nama[50];
  char alamat[50];
  unsigned int tahunjadian;
};

int main(int argc, char const *argv[]) {
  struct MantanPacar mantan1;
  struct MantanPacar mantan2;
  struct MantanPacar mantan3;

  strcpy(mantan1.nama, "Jessy Endra Lestari");
  strcpy(mantan1.alamat, "Cilacap");
  mantan1.tahunjadian = 2012;

  strcpy(mantan2.nama, "Dewi Ila Ayu Wulandari");
  strcpy(mantan2.alamat, "Kebasen");
  mantan2.tahunjadian = 2012;

  strcpy(mantan3.nama, "Mela Triana");
  strcpy(mantan3.alamat, "Purbalingga");
  mantan3.tahunjadian = 2013;

  printf("%s adalah mantan yang beralamat di %s", mantan1.nama, mantan1.alamat);
  printf("\n dimana kita jadian pada tahun %i \n", mantan1.tahunjadian);

  printf("%s adalah mantan yang beralamat di %s", mantan2.nama, mantan2.alamat);
  printf("\n dimana kita jadian pada tahun %i \n", mantan2.tahunjadian );

  printf("%s adalah mantan yang beralamat di %s", mantan3.nama, mantan3.alamat);
  printf("\n dimana kita jadian pada tahun %i \n", mantan3.tahunjadian );

  return 0;
}
