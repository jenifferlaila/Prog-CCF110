#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, A[3][5], B[3][5], S[3][5], D[3][5];
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 5; ++j)
            {
                scanf("%d", &A[i][j]);
            }
    }
    for( i = 0; i < 3; ++i)
    {
        for( j = 0 ; j < 5; ++j)
            {
                scanf("%d", &B[i][j]);
            }
    }
    for(i = 0; i < 3;++i)
    {
        for(j = 0; j < 5; ++j)
            {
                S[i][j] = A[i][j] + B[i][j];
                D[i][j] = A[i][j] - B[i][j];
            }
    }
    return 0;
}
