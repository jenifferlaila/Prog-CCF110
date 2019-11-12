#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N[20],t[20], i;
  for (i = 0; i < 20; i++)
  {
    scanf("%d", &N[i]);
  }

  for (i = 0; i < 20; ++i)
  {
    t[i] = N[19 - i];
    printf("N[%d] = %d\n", i, t[i]);
  }
  return 0;
}
