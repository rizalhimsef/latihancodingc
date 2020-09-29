#include <stdio.h>

typedef struct Anggota {
  char nama[50];
  char alamat [50];
  char noTelfon [15];
  unsigned int tahunGabung;
} identitasAnggota;

int main(int argc, char const *argv[]) {
  identitasAnggota anggota1;

  strcpy(anggota1.nama, "Rizal Alfikri");
  strcpy(anggota1.alamat, "Karanglewas");
  strcpy(anggota1.noTelfon, "082133976008");
  anggota1.tahunGabung = 2015;

  printf("%s adalah anggota SKIn Purbalingga yang bergabung pada tahun %i dan beralamat di %s", anggota1.nama,anggota1.tahunGabung, anggota1.alamat );
  printf("dan nomor telfon yang bisa dihubungi adalah %s", anggota1.noTelfon );

  return 0;
}
