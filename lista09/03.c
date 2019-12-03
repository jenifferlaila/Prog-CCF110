#include <stdio.h>
#include <stdlib.h>
int comparador(int num)
{
  if (num %2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int numero;
  scanf("%d", &numero);
  printf("%d", comparador(numero));
  return 0;
}
