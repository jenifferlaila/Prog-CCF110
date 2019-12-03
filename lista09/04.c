#include <stdio.h>
#include <stdlib.h>
int somador(int num1, int num2)
{
  int somaintervalo = 0, i;
  if (num1 < num2)
  {
    for(i = num1; i <= num2; ++i)
    {
      somaintervalo = somaintervalo + i;
    }
    return somaintervalo;
  }
  else
  {
    for(i = num2; i <= num1; ++i)
    {
      somaintervalo = somaintervalo + i;
    }
    return somaintervalo;
  }
}
int main()
{
  int numero1, numero2;
  scanf("%d", &numero1);
  scanf("%d", &numero2);
  printf("%d", somador(numero1, numero2));
  return 0;
}
