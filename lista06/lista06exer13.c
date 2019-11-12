#include <stdio.h>

int main()
{
    int i, lista[20], invertida[20], troca;
    for (i=0; i<20; i++)
    {
        scanf("%d ", &lista[i]);
    }
    for (i=0; i<20; i++)
    {    
        printf("%d ", lista[i]);
        invertida[i] = lista[19-i];
    }
    printf("\n");
    for (i=0; i<20; i++)
    {
        printf("%d ", invertida[i]);
        
    }

    return 0;
}
