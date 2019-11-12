#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N, V[N], maior = 0, menor = 0;
  printf("Insira um numero menor que 50:\n");
  scanf("%d", &N);
  for (i = 0; i < N; ++i)
	{
    printf("Insira um número:\n");
    scanf("%d", &V[i]);
    V[0] = maior;
    V[0] = menor;
    if (V[i] <= menor)
    {
      menor = V[i];
    }
    if(V[i] >= maior)
    {
      maior = V[i];
    }
  }
  printf("O maior número é %d, posição: %d\n", maior, i);
  printf("O maior número é %d, posição: %d\n", maior, i);
  return 0;
}
