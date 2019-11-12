#include <stdio.h>
int main ()
{
  int L, M, N, vetor[3], temp;
  printf("Insira os valores de L, M, N: \n");
  scanf("%d %d %d", &L, &M, &N);
  vetor[0] = L; vetor[1] = M; vetor[2] = N;
  for(int i = 0; i < 3; ++i)
  {
      for(int j = 0; j < 3; ++j)
      {
          if (vetor[j] > vetor[i]) {
            temp = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temp;
          }
      }
  }
  for(int i = 0; i < 3; ++i){
    printf("%d\n", vetor[i]);
  }
}
