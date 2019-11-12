
#include <stdio.h>

int main()
{
    int i, lista[10], valor;
    printf("digite dez numeros:\n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &lista[i]);
    }
    printf("Digite um numero para usar de comparacao: ");
    scanf("\n%d", &valor);
    for (i=0; i<10; i++)
    {    
        if (lista[i]<valor)
        {
            printf("%d na posicao %d\n", lista[i], i);
        }
    }
    
    

    return 0;
}
