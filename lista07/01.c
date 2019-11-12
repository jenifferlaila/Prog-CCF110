#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int N, *n;
  double M, *m;
  char O, *o;
  n = &N;
  m = &M;
  o = &O;
  scanf("%d\n", &N);
  scanf("%lf\n", &M);
  scanf("%c\n", &O);
  printf("%d %lu %x\n", N, sizeof(N), n);
  printf("%lf %x %d\n",  M, m, sizeof(M));
  printf("%c %x %d\n", O, o, sizeof(O));
  return 0;
}
