#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N, i, menor = 0,pmenor;
  scanf("%d", &N);
  int X[N]; 
  scanf("%d", &X[0]);
  menor = X[0];
  pmenor = 0;
  for (i = 1; i < N; i++)
  {
    scanf("%d", &X[i]);
    if(X[i] < menor)
    {
      menor = X[i];
      pmenor = i;
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", pmenor);
  return 0;
}
