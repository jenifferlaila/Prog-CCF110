#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, idade, soma = 0, media;
  printf("Insera a  idade de 10 pessoas:\n");
  for(i = 0; i < 10; ++i)
  {
    scanf("%d", &idade);
    soma = soma + idade;
  }
  media = soma / 10;
  printf("a média de idade dessas pessoas é :%d\n", media);
  return 0;
}
