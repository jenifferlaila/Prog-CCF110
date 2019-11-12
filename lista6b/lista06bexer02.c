#include <stdio.h>
#include <stdlib.h>
int main()
{
  int M[6][3], i, j, maior = 0, menor = 0, cmaior = 0, lmaior = 0, cmenor = 0, lmenor = 0;
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 3; i++)
    {
      scanf("%d", &M[i][j]);
    }
  }
  maior = M[0][0];
  menor = M[0][0];
  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 3; i++)
    {
      if (M[i][j] <= menor)
      {
        menor = M[i][j];
        lmenor = i;
        cmenor = j;
      }
      else if (M[i][j] >= maior)
      {
        maior = M[i][j];
        lmaior = i;
        cmaior = j;
      }
    }
  }
  printf("Maior :%d\n, posição: %d %d", maior, cmaior, lmaior);
  printf("Menor :%d\n, posição: %d %d", menor, cmenor, lmenor);
  return 0;
}
