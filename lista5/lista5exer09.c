#include <stdio.h>

int main(){
  int dia, mes, ano, teste, flagbissexto = 0;
  teste = 1;
  printf("Insira uma data:\n");
  scanf("%d/%d/%d\n", &dia, &mes, &ano);

  if(mes < 1 || mes > 12){
    teste = 0;
    printf("Data Invalida.\n");
    return 0;
  }

  if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 != 0)
  {
    flagbissexto = 1;
  }

  if (mes == 2)
  {
    if(flagbissexto)
    {
      if(dia < 1 || dia > 29)
      {
        printf("Data Invalida.\n");
        return 0;
      }
    }
    else
    {
      if(dia < 1 || dia > 28)
      {
        printf("Data Invalida.\n");
        return 0;
      }
    }

  }

  else if(mes % 2 == 0 && mes != 2 && mes != 8)
  {
    if(dia < 1 || dia > 30)
    {
      printf("Data Invalida.\n");
      return 0;
    }
  }

  else if(mes == 8)
  {
    if(dia < 1 || dia > 31)
    {
      printf("Data Invalida.\n");
      return 0;
    }
  }

  else if(mes % 2 != 0)
  {
    if(dia < 1 || dia > 30)
    {
      printf("Data Invalida.\n");
      return 0;
    }
  }

  else
  {
      printf("Data valida.\n");
      return 0;
  }

}
