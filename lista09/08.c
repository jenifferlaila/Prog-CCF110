#include<stdio.h>
#include<stdlib.h>
float ideal(int altura, int sexo)
{
    float pesoideal;
    printf("considere 1 para mulher e 0 para homem\n");
    if (sexo == 1)
    {
        pesoideal = (62.1 * altura) - 44.7;
        return pesoideal;
    }
    else if (sexo == 0)
    {
        pesoideal = (72.7 * altura) - 58;
        return pesoideal;
    }
}

int main()
{
    int altura, sexo;
    scanf("f", &sexo);
    scanf("%f", &altura);
    printf("%f", ideal(altura));
}