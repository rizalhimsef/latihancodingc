#include <stdio.h>

int main(void)
{
  char angka1;
  short angka2;
  int angka3;
  long angka4;

  angka1 = 127;
  angka2 = 12767;
  angka3 = 1276767676;
  angka4 = 1276767676;

  printf("Isi variabel angka1 (char): %d \n" ,angka1);
  printf("Isi variabel angka2 (short): %d \n",angka2);
  printf("Isi variabel angka3 (int): %d \n",angka3);
  printf("Isi variabel angka4 (long): %d \n",angka4);

  printf("\n");
  return 0;
}
