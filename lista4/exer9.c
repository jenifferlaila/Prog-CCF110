#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int salariobruto, prestacao;
  printf("Insira o salariobruto: \n");
  scanf("%d", &salariobruto);
  printf("Insira o valor da prestação :\n");
  scanf("%d", &prestacao);
  if (prestacao > (0.3 * salariobruto))
  {
    printf("O empréstimo não poderá ser concedido");
  }
  else{
    printf("o emprestimo poderá ser concedido");
  }
}
