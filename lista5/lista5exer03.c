#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, numero, par = 0, impar = 0;
  printf("Insira 200 números:\n");
  for(i = 0; i < 200; ++i)
  {
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
      ++ par;
    }
    else
    {
      ++ impar;
    }
  }
  printf("A quantidade de números pares são %d\n", par);
  printf("A quantidade de números ímpares são %d\n", impar);
  return 0;
}
