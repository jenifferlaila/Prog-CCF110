#include <stdio.h>

int main()
{
    int n;
    scanf("%d", n);
    int i, lista[n], soma = 0;
    for (i=0; i<n; i++)
    {
        scanf("%d ", &lista[i]);
        if (lista[i]%2 == 0)
            soma = soma + lista[i];
    }
    printf("%d ", soma);

    return 0;
}
