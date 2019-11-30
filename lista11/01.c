#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main()
{
    double temperatura[tam];
    double media, menor, maior;
    int i, cont = 0;
    for (i = 0; i < tam; i++)
    {

        scanf("%lf", &temperatura[i]);

        if (i == 0)
        {
          menor = temperatura[0];
          maior = temperatura[0];
        }

        else if (temperatura[i] < menor)
        {
          menor = temperatura[i];
        }
        else if (temperatura[i] > maior)
        {
          maior = temperatura[i];
        }

    }
    printf("A menor temperatura foi:%lf\n", menor);
    printf("A maior temperatura foi:%lf\n", maior);
    media = (maior + menor)/2;
    for (i = 0; i < tam; i++)
    {
      if (temperatura[i] < media)
      {
        ++ cont;
      }
    }
    printf("A temperatura média foi :%lf\n", media);
    printf("Número de dias abaixo da media:%d\n", cont);
  return 0;
}
