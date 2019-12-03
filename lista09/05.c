#include<stdio.h>
#include<stdlib.h>
float media(float nota1,  float nota2, float nota3, char letra)
{
    float media;
    
    if(letra == A)
    {
        media = (nota1 + nota2 + nota3)/3;
        return media;
    }
    else if (letra == P)
    {
        media = ((nota1 * 5) + (nota2 * 3) + nota3 * 2)/10;
        return media;
    }
}
int main()
{
    int nota1, nota2, nota3;
    char letra;
    scanf("%f %f %f", &nota1, nota2, &nota3)
    fgets(letra, sizeof(letra), stdin);
    printf("%f\n", media(nota1, nota2, nota3, letra));
return 0;
}
