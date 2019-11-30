#include <stdio.h>
#define tam 3

int SomaVetor(int *vetor, int tamanho)
{
    int i, soma; soma = 0;

    for(i = 0; i < tamanho; ++i)
    {
        soma = soma + vetor[i];
    }

    return soma;
}

int main()
{

    int i, vetor[tam];

    for(i = 0; i < tam; ++i)
    {

        scanf("%d", vetor[i]);

    }

    printf("Soma = %d\n", SomaVetor(vetor, tam));

    return 0;
}