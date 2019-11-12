#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, numero, soma = 0;
  printf("Insira 500 números:\n");
  for(i = 0; i < 500; ++i)
  {
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
      soma = soma + numero;
    }
  }
  printf("A soma de números pares são %d\n", soma);
  return 0;
}
