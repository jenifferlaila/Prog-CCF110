#include <stdio.h>

int main()
{
  int vetor[100], qtd, i, produto;
  float preco, faturamento;
    for (i = 0; i < 100; ++i)
    {
      scanf("%d", &produto);
      scanf("%d", &qtd);
      scanf("%f", &preco);
      vetor[produto - 1] = preco;
      vetor[produto - 1] = vetor[produto - 1] * qtd;
      faturamento = faturamento + vetor[produto - 1];
    }
    printf("O faturamento mensal do armazém foi : %f\n", faturamento);

    return 0;
}
