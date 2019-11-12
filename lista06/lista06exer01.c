#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, soma = 0, A[6];
	A[0] = 15;
	A[1] = 20;
	A[2] =3;
	A[3] = 1;
	A[4] = 26;
	A[5] =2;
	for (i = 0; i < 6; ++i)
	{
    	soma = soma + A[i];
	}

	printf("O valor total da soma do vetor é :%d", soma);
	return 0;
}
