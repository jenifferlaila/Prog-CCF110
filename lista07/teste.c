#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i = 5, *p;
  p = &i;
  printf(“%u %d %d %d %d \n”, p, *p+2, **&p, 3**p, **&p+4);
  return 0;
}
