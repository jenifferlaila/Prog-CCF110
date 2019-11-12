#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N, A[N], B[N], C[N], D[N];
  printf("Insira um número:\n");
  scanf("%d", &N);
  for (i = 0; i < N; ++i)
	{
    printf("Insira um número:\n");
    scanf("%d", &A[i]);
    printf("Insira um número:\n");
    scanf("%d", &B[i]);
    if (A[i] > B[i])
    {
      C[i] = A[i];
    }
    else
    {
      C[i] = B[i];
    }
    D[i] = (A[i] + B[i]) / 2;

    printf("%d\n", C[i]);
    printf("%d\n", D[i]);

  }
  return 0;
}
