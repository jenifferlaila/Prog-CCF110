#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, base, altura, areatriangulo;
  printf("Insira os valores da base e altura dos triângulos\n");
  for (i = 1; i <= 5; i++)
  {
    scanf("%d %d", &base, &altura);
    areatriangulo = (base * altura)/2;
    printf(" A área do triângulo %d é : %d\n", i, areatriangulo);
  }
  return 0;
}
