#include <stdio.h>
#include <stdlib.h>
#define tam 50
int main()
{
  int  tipoplanta[tam];
  int estoqueideal, estoqueatual, comprar, i;
  for (i = 0; i < tam; i++)
  {
    printf("Escreva respectivamente o estoque  ideal e o atual da planta %d\n", i);
    scanf("%d", &estoqueideal);
    scanf("%d", &estoqueatual);
    if (estoqueatual < estoqueideal)
    {
      comprar = (estoqueideal - estoqueatual);
      printf("Necessário comprar mais %d plantas %d\n", comprar, i);
    }
    else
    {
      printf("Não é necessário compra mais plantas\n");
    }
  }
  return 0;
}
