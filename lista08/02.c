#include <stdio.h>
##include <string.h>

typedef struct
{

  char nome[30], matricula[4];
  float mediaf;

}Aluno;


int main()
{
  int i, cont1, cont2;
  Aluno aluno[10], aprovados[10], reprovados[10];

  cont1 = 0; cont2 = 0;

  for(i = 0; i < 10; ++i)
  {

    printf("Insira o nome do aluno:\n");
    scanf("%s", aluno[i].nome);
    getchar();

    printf("\n Matricula: ");
    scanf("%s", aluno[i].matricula);
    getchar();

    printf("\nInsira a media:");
    scanf("%f\n", aluno[i].mediaf);

    if(aluno[i].mediaf >= 5.0)
    {

      strcpy(aprovados[cont1].nome, aluno[i].nome);
      strcpy(aprovados[cont1].matricula, aluno[i].matricula);
      aprovados[cont1].mediaf = aluno[i].mediaf;

      ++cont1;
    }

    else
    {

      strcpy(reprovados[cont2].nome, aluno[i].nome);
      strcpy(reprovados[cont2].matricula, aluno[i].matricula);
      reprovados[cont2].mediaf = aluno[i].mediaf;


      ++cont2;
    }

  }

  printf("aprovados\n");
  for(i = 0; i < cont1; ++i)
  {

    printf("nome: %s\n", aprovados[i].nome);
    printf("matricula: %s\n", aprovados[i].matricula);
    printf("media: %f\n", aprovados[i].mediaf);

  }

  printf("reprovados\n");

  for(i = 0; i < cont2; ++i)
  {

    printf("nome: %s\n", reprovados[i].nome);
    printf("matricula: %s\n", reprovados[i].matricula);
    printf("media: %f\n", reprovados[i].mediaf);

  }

  return 0;
}
