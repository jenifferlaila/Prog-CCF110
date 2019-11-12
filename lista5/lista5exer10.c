#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float salario,salariofinal;
  printf("Insira seu salário:\n");
  scanf("%f", &salario);
  if (salario < 500)
  {
    salariofinal = salario + (salario * 0,15);
    printf("Seu salário agora é de : %f\n", salariofinal);
  }
  else
    printf(" Seu salário permanece inalterado\n");
return 0;
}
