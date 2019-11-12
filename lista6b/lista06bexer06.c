#include <stdio.h>
#include <stdlib.h>
int main()
{
int N;
int M[N][N], i, j;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; i++)
    {
      scanf("%d", &M[i][j]);
      if (i+j > N -1 )
      {
        printf("Elementos acima da diagonal principal :%d\n", M[i][j]);
      }
    }
  }
  return 0;
}
