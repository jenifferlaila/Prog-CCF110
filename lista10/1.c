#include <stdio.h>
int calculadora(int num1, int num2, int op)
{
  int resultado;
  if (op == 1)
  {
    resultado = num1 + num2;
  }
  else if (op == 0)
  {
    resultado = num1 - num2;
  }
  return resultado;
}

int main()
{
  FILE *arquivo;
  arquivo = fopen("arquivo.txt", "w+b");
  int num1, num2, op, resultado;
  printf("Insira 1 se adição e 0 se subtração\n");
  scanf("%d", &op);
  printf("Insira dois numeros\n");
  scanf("%d %d", &num1, &num2);
  resultado = calculadora(num1, num2, op);
  printf("N1 %d OP %d N2 %d = %d\n", num1, op, num2, resultado);

  if (arquivo == NULL)
  {
    printf("O arquivo não pode ser lido\n");
  }
  else
  {
    fwrite(&num1, sizeof(num1), 1, arquivo);
    fwrite(&op, sizeof(op), 1, arquivo);
    fwrite(&num2, sizeof(num2), 1, arquivo);
    fputs(" = ", arquivo);
    fwrite(&resultado, sizeof(resultado), 1, arquivo);
  }
  fclose(arquivo);
  return 0;
}
