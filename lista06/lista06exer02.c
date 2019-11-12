#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, N = 10, V[N], multiplo[N];
	for (i = 0; i < N; ++i)
	{
    scanf("%d\n", &V[i]);
    if (V[i] == 5)
    {
      multiplo[i] = i;
    }
  }
  for(i = 0; i < N; ++i)
  {
      if(multiplo[i] < N && multiplo[i] >= 0)
      {
        printf("%d\n", multiplo[i]);
      }

  }

  return 0;
}
