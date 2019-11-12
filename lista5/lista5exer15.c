#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i = 1, n;
  float numero, E = 0;
  printf("Insira um número inteiro positivo:\n");
  scanf("%d", &n);

  while (i <= n)
  {
    numero = 1.0 / i;
    E = E + numero;
    ++i;
  }

  printf(": %f\n", E);
  return 0;
}
