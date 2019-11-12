#include <stdio.h>

int main()
{
  int v[10], v2[10], i;
  for(i = 0; i < 10; ++i)
  {
    printf("Insira um inteiro\n");
    scanf("%d", &v[i]);

    if(v[i] < 10)
    {
      v2[i] = 1;
    }

    else
    {
      v2[i] = v[i];
    }

  }

  for(i = 0; i < 10; ++i)
  {
    
    printf("Valor na posicao %d do vetor 1: %d\n", i, v[i]);
    printf("Valor na posicao %d do vetor 2: %d\n", i, v2[i]);

  }


  return 0;
}
