#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N = 10, msecundaria[N], mprincipal[N];
  int M[N][N], i, j, temp;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%d", &M[i][j]);
      if (i + j > N - 1)
      {
        msecundaria[i] = M[i][j];
      }
      if (i == j)
      {
        mprincipal[i] = M[i][j];
      }
    }
  }

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      if(i == 2)
      {
        temp = M[2][j];
        M[2][j] = M[8][j];
        M[8][j] = temp;
      }

      if(j == 4)
      {
        temp = M[i][4];
        M[i][4] = M[i][10];
        M[i][10] = temp;
      }

      if (i + j > N - 1)
      {
        temp = msecundaria[i];
        msecundaria[i] = mprincipal[i];
        mprincipal[i] = temp;
     }
   }
 }
  return 0;
}
