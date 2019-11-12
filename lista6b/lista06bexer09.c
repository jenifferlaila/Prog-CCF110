#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, M[5][10], maior;

    for(i = 0; i < 5; ++i)
    {
        for(j = 0; j < 10; ++j)
            {
                scanf("%d", &M[i][j]);
            }
    }
    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 5; ++j)
        {
                if (j == 0)
		{
			maior = M[i][j];
		}
		if (M[i][j] > maior)
		{
			maior = M[i][j];
		}
        	printf("O maior da delegacao %d: %d ", i+1, maior);
	}
    }
    return 0;
}
