#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, numero;
  printf("Insira um número e receba o cubo\n");
  for(i = 0; i < 400; ++i)
  {
    scanf("%d", &numero);
    numero = (numero * numero * numero);
    printf("resultado %d\n", numero);
  }
  return 0;
}
