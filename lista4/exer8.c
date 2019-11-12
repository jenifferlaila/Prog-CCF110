#include <stdio.h>
int main ()
{
  int a, b, auxiliar;
  printf("Insira os valores de a e b:\n");
  scanf("%d %d", &a, &b);

  auxiliar = a;
  a = b;
  b = auxiliar;

  printf("O valor de a é : %d\n", a);
  printf("O valor de b é : %d\n", b);

  return 0;
}
