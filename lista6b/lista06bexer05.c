#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, M[10][10];

    for(i = 0; i < 10; ++i)
    {
        for(j = 0; j < 10; ++j)
            {
                scanf("%d", &M[i][j]);
            }
            if(i != j)
            {
              printf("%d", M[i][j]);
            }
    }

    return 0;
}
