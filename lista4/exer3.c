#include <stdio.h>

int main()
{
	int quantidade = 0, tipo;
	float valor = 0;
	printf("Digite 0 se sal e 1 se doce: ");
	scanf("%d", &tipo);
	printf("digite quantidade: ");
	scanf("%d", &quantidade);
	if (tipo == 1)
	{
    	valor = (quantidade * 0.15);
    	printf("O valor a ser pago é : %f", valor);
	}
   if (tipo == 0)
	{
    	valor = (quantidade * 0.10);
    	printf("O valor a ser pago é : %f", valor);
	}
	return 0;
}
