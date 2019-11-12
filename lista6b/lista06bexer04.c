#include <stdio.h>
#include <stdlib.h>
int main()
{
int N = 5;
int M[N][N], i, j, media, soma = 0;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; i++)
    {
      scanf("%d", &M[i][j]);
      if (i == j)
      {
        soma = M[i][j];
      }
    }
  }
  media = soma / N;
  printf("A media dos elementos da diagonal principal é :%d\n", media);
  return 0;
}
