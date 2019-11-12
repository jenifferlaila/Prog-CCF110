#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
  char titulo[30], autor[15];
  int ano;
}livros;

int main()
{
  int i, N, teste; teste = 0;
  char LIVRODESEJADO[30];
  printf("Insira o número de livros:\n");
  scanf("%d", &N);
  livros livro[N];
  // Se feito cm ponteiro:
  //livros livroteste, *ptr;
  // ptr = &livroteste;
  //livroteste.ano = 1999;
  //(*ptr).ano = 1999;
  //ptr -> ano = 1999;
  //scanf("%d", &livroteste.ano);
  //scanf("%d", (*ptr).ano);
  //scanf("%d", ptr -> ano);
  for (i = 0; i < N; i++)
  {

    scanf("%s", livro[i].titulo);
    getchar();
    scanf("%s", livro[i].autor);
    getchar();
    scanf("%d", livro[i].ano);
  }
  printf("Digite o nome do livro desejado:\n");
  scanf("%s", LIVRODESEJADO);
  for (i = 0; i < N; i++)
  {
    if (strcmp(LIVRODESEJADO, livro[i].titulo) == 0)
    {
      printf("Título:%s\n", livro[i].titulo);
      printf("Autor:%s\n", livro[i].autor);
      printf("Ano:%d\n", livro[i].ano);
      teste = 1;
    }
  }

  if(!teste)
  {
    printf("Livro não encontrado.\n");
  }

  return 0;
}
