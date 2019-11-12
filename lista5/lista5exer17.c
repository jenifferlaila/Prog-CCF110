#include <stdio.h>


int main()
{
  int i = 1, n, multiplicacao = 1;
  printf("Insira um número:\n");
  scanf("%d", &n);
  while(i<=n)
  {
    multiplicacao = i * n;
    printf("%d x %d = %d\n",i, n, multiplicacao);
    multiplicacao = 1;
    ++i;
  }
  return 0;
}
