#include <stdio.h>
#include <stdlib.h>

int main ()
{
int N = 6, V[N], i, positivo = 0, negativo = 0;
  for (i = 0 ; i < N ; ++i)
  {
    scanf("%d", &V[i]);
    if (V[i] > 0)
    {
      ++ positivo;
    }
    else if (V[i] < 0)
    {
      ++ negativo;
    }
    else
    {
      printf("número neutro");
    }
  }
  printf("Os números negativos são: %d\n", negativo);
  printf("Os números positivos são %d\n", positivo);
  return 0;
}
