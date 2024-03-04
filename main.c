#include <stdio.h>
void dizerBomdia (char nome[20]){
  printf("Boa tarde! %s\n", nome);
}
int main(void) {
  dizerBomdia("Julia");
  dizerBomdia("Milena");
  dizerBomdia("Isabella");
  dizerBomdia("Isabela");
  dizerBomdia("Raquel");
  return 0;
}