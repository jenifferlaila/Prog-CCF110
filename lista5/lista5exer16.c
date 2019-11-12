#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, n, multiplicacao = 1;
  printf("Insira um número:\n");
  scanf("%d", &n);
  for(i = 1; i <= n; ++i)
  {
    multiplicacao = i * n;
    printf("%d x %d = %d\n",i, n, multiplicacao);
    multiplicacao = 1;
  }
  return 0;
}
