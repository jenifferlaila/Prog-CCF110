#include <stdio.h>
#include <stdlib.h>
int main()
{
int C, D, E, F;
int A[C][D], B[E][F], G[C][E], i, j, k = 0;
  if (D == E) {
    for (i = 0; i < C -1; i++)
    {
      for (j = 0; j < F - 1; j++)
      {
        for (k = 0; k < D - 1; k++)
        {
          G[i][k] += A[i][k] * B[k][j];
        }
      }
    }
  }
  return 0;
}
