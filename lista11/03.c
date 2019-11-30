#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  int situacao, tipo;
  int valor;
  char endereco[20], bairro [20];
}imoveis;

int main()
{
  int i, procurado;
  imoveis imovel[50];
  for (i = 0; i < 50; i++)
  {
    printf("cadastramento de imóveis: 1 se casa, 2 se loja, 3 se apartamento, ");
    printf("4 se venda 5 se aluguel, endereço e bairro");
    scanf("%d", &imovel[i].tipo);
    scanf("%d", &imovel[i].situacao);
    scanf("%d", &imovel[i].valor);
    getchar;
    fgets(imovel[i].endereco, sizeof(imovel[i].endereco), stdin);
    fgets(imovel[i].bairro, sizeof(imovel[i].bairro), stdin);
  }
  scanf("%d", &procurado);
  for (i = 0; i < 50; i++)
  {
    if (imovel[i].situacao == procurado)
    {
      printf("Imovel tipo %d, valor %d, endereco %s, bairro %s\n", imovel[i].tipo, imovel[i].valor, imovel[i].bairro, imovel[i].endereco);
    }
  }
  return 0;
}
