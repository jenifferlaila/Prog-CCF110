#include <math.h>
#include <stdio.h>

int main()
{
    int i, lista[15];
    float raiz[15];
    for (i=0; i<15; i++)
    {
        scanf("%d",&lista[i]);
        if(lista[i]>=0)
            raiz[i] = sqrt(lista[i]);
        else
            raiz[i] = -1;
    }
    for (i=0; i<15; i++)
    {    
        printf("%.1f ", raiz[i]);
    }

    return 0;
}
