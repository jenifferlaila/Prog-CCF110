#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, fatorial, numero;
  printf("Insere um numero:");
  scanf("%d", &numero);
  fatorial = 1;
  for(i = 1; i <= numero; ++i)
  {
    fatorial = fatorial * i;
  }
  printf("Fatorial de %d = %d\n", numero, fatorial);
  return 0;
}
