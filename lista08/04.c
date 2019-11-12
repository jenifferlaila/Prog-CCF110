#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define tam 5
typedef struct produtos{
  int codigo, quantidade, estoque = 0;
  float preco;
  char nome[15];
}produto;
int main()
{
  produtos produto[tam];
  int i, produtop, quantidadep;
  for (i = 0; i < tam; i++)
  {
		printf("Insira nome, preço e quantidade de produtos\n");
    scanf("%d", &produto[i].codigo);
    scanf("%s", produto[i].nome);
    getchar ();
    scanf("%f", &produto[i].preco);
    scanf("%d", &produto[i].quantidade);
  }
  printf("Insira seu pedido:\n");
	scanf("%d %d", &produtop &quantidadep);
  while (produtop != 0)
  {
    for (i = 0; i < tam; i++)
    {
			if ((quantidadep <= produto[i].quantidade) && (produtop == produto[i].codigo))
			{
				produto[i].quantidade = produto[i].quantidade - quantidadep;
				printf("A quantidade do produto %d é de :%d", produtop, produto[i].quantidade);
			}
			else if ((quantidadep > produto[i].quantidade) && (produtop == produto[i].codigo))
			{
				printf("Quantidade excede o estoque\n");
			}
			else if (produtop == produto[i].codigo)
			{
				printf("Produto indisponível")
			}	
    }
  } 
	return 0;
}