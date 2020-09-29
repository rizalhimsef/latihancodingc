#include <stdio.h>

struct Speaker {
  char Merek[50];
  char Kekuatan [50];
  unsigned int Harga;
};

int main(int argc, char const *argv[]) {
  struct Speaker speaker1;

  strcpy(speaker1.Merek, "Edifier");
  strcpy(speaker1.Kekuatan, "25 Watt");
  speaker1.Harga = 1250000;

  printf("%s adalah speaker yang berkekuatan %s ", speaker1.Merek, speaker1.Kekuatan );
  printf("dengan harga Rp %i,00\n", speaker1.Harga );
  return 0;
}
