#include <stdio.h>

int main(){
  int cont, i, j, m;
  i = 1;
  cont = 0;
  printf("Insira j e m:\n");
  scanf("%d %d", &j, &m);

  while (cont <= 10)
  {
    if(i % m == j % m)
    {
      printf("%d é congruente modulo %d a %d\n", i, m, j);
      ++cont;
    }
    ++i;
  }

  return 0;
}
