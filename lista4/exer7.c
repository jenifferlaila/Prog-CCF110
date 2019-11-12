#include <stdio.h>
#include <stdlib.h>
int main ()
{

  int a, b;
  printf("Escreva os valores de a e b :\n");
  scanf("%d %d", &a, &b );

  if (a % b == 0)
  {
    printf(" A é divisível por B");
  }
  else
  {
    printf("A não é divisível por B");
  }
  return 0;
}
