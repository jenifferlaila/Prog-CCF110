
#include <stdio.h>

int main()
{
    int i, lista[20], troca;
    for (i=0; i<20; i++)
    {
        scanf("%d", &lista[i]);
    }
    for (i=0; i<20; i++)
    {    
        printf("%d ", lista[i]);
    }
    printf("\n");
    for (i=0; i<10; i++)
    {
        troca = lista[19-i];
        lista[19-i] = lista[i];
        lista[i] = troca;
        
    }
    for (i=0; i<20;i++)
    {
        printf("%d ", lista[i]);
    }

    return 0;
}