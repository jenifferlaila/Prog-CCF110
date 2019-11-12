#include <stdio.h>

int main()
{
	int n1, n2, n3;
	scanf("%d, %d, %d", &n1, &n2, &n3);
	if (n1 > (n2 +n3))
	{
    	printf("O primeiro é maior que a soma dos outros dois");
	}
	else
	{
    	printf("O primeiro é menor ou igual que a soma dos outros dois");

	}
	return 0;
}
