#include <stdio.h>
int main(void)
{
  unsigned char angka1;
  unsigned short angka2;
  unsigned int angka3;
  unsigned long angka4;

  angka1 = 299;
  angka2 = 65599;
  angka3 = 4294967299;
  angka4 = 4294967299;

  printf("Isi variabel angka1 (char): %d \n",angka1 );
  printf("Isi variabel angka2 (short): %d \n",angka2 );
  printf("Isi variabel angka3 (int): %u \n",angka3 );
  printf("Isi variabel angka4 (long): %u \n",angka4 );

  printf("\n" );
  return 0;
}
