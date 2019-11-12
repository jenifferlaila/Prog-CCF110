#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N, V1[N], V2[N], V3[N];
  printf("Insira um número:\n");
  scanf("%d", &N);
  for (i = 0; i < N; ++i)
	{
    printf("Insira um número:\n");
    scanf("%d", &V1[i]);
    printf("Insira um número:\n");
    scanf("%d", &V2[i]);
    V3[i] = V1[i] + V2[i];
    printf("Vetor 3 :%d\n", V3[i]);
  }
  return 0;
}
