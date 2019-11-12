#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, N, maior;
    scanf("%d", &N);
    int M[N][N], Mt[N][N];
    for(i = 0; i < N; ++i)
    {
        for(j = 0; j < N; ++j)
            {
                scanf("%d", &M[i][j]);
		            Mt[i][j] = M[j][i];
            }
    }
    for(i = 0;i < N; ++i)
    {
        for(j = 0; j < N;++j)
        {
          if (M[i][j] == Mt[i][j])
		      {
        		printf("A matriz é simétrica\n");
		      }
		      else
		      {
			      printf("Não simétrica\n");
		      }
	      }
    }
    return 0;
}
