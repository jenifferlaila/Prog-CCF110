#include <stdio.h>

int main()
{
  int i, j, v1[10], v2[10], vr[20], cont = 0, cont2 = 0;

  for(j = 0; j < 10; ++j)
  {
    scanf("%d", &v1[j]);
    scanf("%d", &v2[j]);
  }

  for(i = 0; i < 20; ++i)
  {
    if(i == 0 || i % 2 == 0)
    {
      vr[i] = v1[cont];
      ++cont;
    }

    else
    {
      vr[i] = v2[cont2];
      ++cont2;
    }

  }

  for(i = 0; i < 20; ++i)
  {
    printf("Valor na poseicao %d do vetor resultante: %d\n", i, vr[i]);
  }

  return 0;

}
