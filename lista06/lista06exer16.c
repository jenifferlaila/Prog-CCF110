#include <stdio.h>

int main()
{
    float atletas[10], media = 0;
    int i;
    printf("Insira a altura dos atletas\n");
    for (i=0; i<10; i++)
    {
        scanf("%f\n", &atletas[i]);
        media = media + atletas[i];
        
    }
    media = media/10;
    for (i=0; i<10; i++)
    {
        if (atletas[i] > media)
        {
            printf("O atleta numero: %d esta acima da media", i+1);
        }
        
    }

    return 0;
}