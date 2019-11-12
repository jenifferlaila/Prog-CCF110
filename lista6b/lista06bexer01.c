#include <stdio.h>
#include <stdlib.h>
int main()
{
int M[3][5], i, j, cont = 0;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 5; i++)
    {
      scanf("%d", &M[i][j]);
      if (M[i][j] <= 20 && M[i][j] >= 15)
      {
        ++cont;
      }
    }
  }
  printf(" A quantidade de números entre 15 e 20 é :%d\n", cont);
  return 0;
}
