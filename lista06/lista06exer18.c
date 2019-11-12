#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N, id[N], valores[N], total, i;

  printf("Insira a quantidade de serviços prestados no dia:\n");
  scanf("%d", &N);

  total = 0;
  i = 0;

  printf("Insira o id\n");
  scanf("%d", &id[i]);
  while(id >= 0)
  {
    printf("Insira o valor\n");
    scanf("%d", &valores[i]);
    total = total + valores[i];
    ++i;

    printf("Insira o id\n");
    scanf("%d", &id[i]);

  }

  printf("Total faturado no dia %d\n", total);

  return 0;
}
