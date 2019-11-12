#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N = 30, V[N], A, produto;
  printf("Insira um número\n");
  scanf("%d", &A);
	for (i = 0; i < N; ++i)
	{
    printf("Insira 30 números\n");
    scanf("%d", &V[i]);
    produto = A * V[i];
    printf("O produto é : %d\n", produto);
    if (produto % 2 == 0)
    {
      printf("produto é par\n");
    }
    else
    {
      printf("Produto é ímpar\n");
    }
  }
  return 0;
}
