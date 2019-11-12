#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N = 10;
  int M[N][N], i, j, temp;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      scanf("%d", &M[i][j]);
      if (i + j > N - 1)
      {
        printf("%d\n", M[i][j]);
      }
    }
  }
    return 0;
}
