#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, n, voto, nulo, branco, candidato1, candidato2, candidato3, candidato4;
  double porcentagem;
  nulo = 0; branco = 0; candidato1 = 0; candidato2 = 0; candidato3 = 0; candidato4 = 0;
  printf("Insira o número de eleitores:\n");
  scanf("%d", &n);
  for(i = 0; i < n; ++i)
  {
    scanf("%d", &voto);
    if (voto <= 6)
    {
      if(voto == 1)
        ++ candidato1;
      else if(voto == 2)
        ++ candidato2;
      else if (voto == 3)
        ++ candidato3;
      else if (voto == 4)
        ++ candidato4;
      else if (voto == 5)
        ++ nulo;
      else
        ++ branco;
    }
    else
    printf("Voto inválido.\n");
  }
  porcentagem = branco + nulo;
  porcentagem = porcentagem / n * 100;
  printf("O total do candidato 1 foi: %d\n", candidato1);
  printf("O total do candidato 2 foi :%d\n", candidato2);
  printf("O total do candidato 3 foi :%d\n", candidato3);
  printf("O total do candidato 4 foi :%d\n", candidato4);
  printf("O total de nulos e brancos  foi :%d %d\n", nulo, branco);
  printf("A porcentagem total de votos brancos e nulos foi: %lf\n", porcentagem);
return 0;
}
