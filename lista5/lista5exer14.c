#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, n;
  float numero, E = 0;
  printf("Insira um número inteiro positivo:\n");
  scanf("%d", &n);

  for(i = 1; i <= n; ++i)
  {
    numero = 1.0 / i;
    E = E + numero;
  }

  printf(": %f\n", E);
  return 0;
}
