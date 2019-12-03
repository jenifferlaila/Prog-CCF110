#include<stdio.h>
#include<stdlib.h>
int matriz(int M[N][N]);
{
    int N, i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (M[i][j]< (i +j))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        
    }
    
}

int main ()
{
    int N, i, j;
    int M[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
return 0;
}

}