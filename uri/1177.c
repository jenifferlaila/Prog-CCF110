#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N[1000], i,T, cont = 0;
  scanf("%d", &T);
  for (i = 0; i < 1000; i++)
  {
    N[i] = cont;
    printf("N[%d] = %d\n", i, cont);
    ++ cont;
    if (cont == T)
    {
    cont = 0;
    }
  }
  return 0;
}
