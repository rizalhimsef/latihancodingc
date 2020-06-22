#include <stdio.h>

int main(void)
{
  int harga;
  float nilai_ip;
  char huruf;

  printf("Harga barang:");
  scanf("%d",&harga);

  printf("Nilai IP:");
  scanf("%f",&nilai_ip);

  printf("Huruf pertama nama anda:");
  scanf(" %c",&huruf);

  printf("\n");
  printf("harga = %d , nilai_ip = %f, huruf = %c", harga, nilai_ip, huruf);
  printf("\n");

  return 0;
}
