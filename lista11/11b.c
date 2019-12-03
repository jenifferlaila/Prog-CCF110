#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, codigocandidato, candidato[6], menor = 0, maior = 0;
  FILE *arquivo;
  arquivo = fopen("voto.txt", "r");
  FILE *arquivos;
  arquivos = fopen("resultado.txt", "w");
  for(i = 1; i <= 5; ++i)
  {
    candidato[i] = 0;
  }
  if ((arquivo == NULL) || (arquivos == NULL))
  {
    printf("O arquivo nã pode ser  aberto\n");
  }
  else
  {
    while(!feof(arquivo))
    {
      fscanf(arquivo, "%d", &codigocandidato);
      if (codigocandidato == 1)
      {
        ++candidato[1];
      }
      if (codigocandidato == 2)
      {
        ++candidato[2];
      }
      if (codigocandidato == 3)
      {
        ++candidato[3];
      }
      if (codigocandidato == 4)
      {
        ++candidato[4];
      }
      if (codigocandidato == 5)
      {
        ++candidato[5];
      }
      maior = candidato[1];
      menor = candidato[1];
      for (i = 1; i <= 5; i++)
      {
        if (candidato[i] <= menor)
        {
          menor = candidato[i];
        }
        else if (candidato[i] >= maior)
        {
          maior = candidato[i];
        }
      }
        fprintf(arquivos, "%d %d", i, maior);
        fprintf(arquivos, "Menos votado %d número de votos %d\n", i, menor);

    }
  }
  return 0;
}
