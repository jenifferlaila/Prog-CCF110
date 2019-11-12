#include <stdio.h>
#include <stdlib.h>
int main()
{
int M[5][3], i, j, soma;
//linha 0:corte
//linha 1:depilação
//linha 2:podologia
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &M[i][j]);
    }
  }

  for (i = 0; i < 5; i++)
  {
    M[i][0] = (5 * M[i][0]);
    M[i][1] = (7.50 * M[i][1]);
    M[i][2] = (15 * M[i][2]);
    soma = M[i][0] + M[i][1] + M[i][2];
    printf("A funcionária %d recebeu %d\n", i, soma);
  }
  return 0;
}
