#include <stdio.h>
//
// int main()
// {
//   float mat[50][50];
//   int i, j;
//   for(i = 0; i < 50; ++i)
//   {
//     for(j = 0; j < 50; ++j)
//     {
//       mat[i][j] = 0.0;
//     }
//   }
//
//   return 0;
// }
//

int main()
{
  float *aux, mat[5][5];
  aux = &mat[0][0];

  for(int i = 0; i < 25; ++i)
    *(aux + i) = 0.0;
    printf("oi\n");

  return 0;
}
