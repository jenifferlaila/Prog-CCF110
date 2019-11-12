#include <stdio.h>
int main ()
{
  float salariominnimo, salario;
  int quantidade;
  printf("Insira o valor do salário mínimo\n");
  scanf("%f", &salariominnimo);
  printf("Insira o valor do seu salário\n");
  scanf("%f", &salario);

  quantidade = salario / salariominnimo;
  printf("%d\n", quantidade);

  return 0;
}
