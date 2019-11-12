#include <math.h>
#include <stdio.h>

int main()
{
    int i, lista[10], quadrado[10];
    for (i=0; i<10; i++)
    {
        scanf("%d",&lista[i]);
        if(lista[i]>=0)
            quadrado[i] = pow(lista[i],2);
        else
            quadrado[i] = -1;
    }
    for (i=0; i<10; i++)
    {    
        printf("%d ", quadrado[i]);
    }

    return 0;
}
