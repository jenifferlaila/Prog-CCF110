#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, n, numero, soma = 0;
  printf("Insira a quantidade de números:\n");
  scanf("%d", &n);
  for(i = 1; i <= n; ++i)
  {
    printf("Insira um número:\n");
    scanf("%d", &numero);
    soma = soma + numero;
  }
  printf("A soma de todos os números é: %d\n", soma);
  return 0;
}
