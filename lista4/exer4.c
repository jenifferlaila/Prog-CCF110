#include <stdio.h>
int main()
{

  int velocidadepermitida, velocidade, multa;

  printf("Insira a velocidade máxima permitida:\n");
  scanf("%d", &velocidadepermitida);
  printf("\nInsira a velocidade do motorista:\n");
  scanf("%d", &velocidade);
  if (velocidade > velocidadepermitida)
  {

    if (velocidade >= (velocidadepermitida + 10) && velocidade < (velocidadepermitida + 11))
    {

      multa = 50;
      printf("O valor da multa é de : %d\n", multa);

    }

    else if (velocidade < (velocidadepermitida + 30) && velocidade > (velocidadepermitida + 10))
    {
      multa = 100;
      printf("O valor da multa é de : %d\n", multa);

    }

    else if (velocidade > (velocidadepermitida + 30))
    {
    multa = 200;
    printf("O valor da multa é de : %d\n", multa);

    }
  }
  return 0;
}
