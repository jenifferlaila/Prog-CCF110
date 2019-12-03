#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *arquivo;
  arquivo = fopen("alunos.txt", "r");
  int matricula;
  float  nota1, nota2, nota3, media;
  char nome[30];
  if (arquivo == NULL)
  {
    printf("Não foi possível abrir o arquivo\n");
  }
  else
  {
    fscanf(arquivo, "%d;%f;%f;%f;%[^;]s ", &matricula, nome, &nota1, &nota2, &nota3);
    printf("%d %s %f %f %f", matricula, nome, nota1, nota2, nota3);

    media = (nota1 + nota2 + nota3)/3;
    if (media >= 8.5)
    {
      printf("Excelente\n");
    }
    else if (media >= 7)
    {
      printf("bom\n");
    }
    else if (media < 7)
    {
      printf("preocupante\n");
    }

  }
  fclose(arquivo);

  return 0;
}