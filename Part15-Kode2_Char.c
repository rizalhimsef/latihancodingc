#include <stdio.h>

int main(void)
{
  char karakter1, karakter2, karakter3;

  printf("Input karakter sembarang \n");
  printf("======================== \n");
  printf("\n");

  printf("Karakter pertama: ");
  scanf(" %c",&karakter1);

  printf("Karakter kedua:");
  scanf(" %c",&karakter2);

  printf("Karakter ketiga:");
  scanf(" %c",&karakter3);

  printf("\n");
  printf("Karakter yang diinput adalah: %c %c %c", karakter1, karakter2, karakter3);

  printf("\n");
  return 0;
}
