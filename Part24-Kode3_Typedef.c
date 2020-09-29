#include <stdio.h>

struct Chapter {
  char  nama[50];
  unsigned int  tahunBerdiri;
  char alamatSekretariat[50];
};

typedef struct Chapter dataChapter;

int main(int argc, char const *argv[]) {
  dataChapter chapter1;

  strcpy(chapter1.nama, "SKIn Purbalingga");
  chapter1.tahunBerdiri = 2020;
  strcpy(chapter1.alamatSekretariat, "Purbalingga");

  printf("%s adalah sebuah klub otomotif asal %s ", chapter1.nama, chapter1.alamatSekretariat );
  printf("yang berdiri pada tahun %i \n",chapter1.tahunBerdiri );

  return 0;
}
