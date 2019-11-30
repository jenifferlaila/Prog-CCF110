#include <stdio.h>

int TipoTriangulo(int lado1, int lado2, int lado3)
{

    short int tipo; tipo = 0;


    if(lado1 == lado2)
    {

        if(lado2 == lado3)
        {
            tipo = 1;
        }

        else
        {

            tipo = 2;

        }

    }

    else if(lado2 == lado3 && lado2 != lado3)
    {
        
        tipo = 2;

    }

    else if(lado1 == lado3 && lado2 != lado1)
    {

        tipo = 2;

    }

    else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
    {

        tipo = 3;

    }

    return tipo;
}

int main()
{

    int lado[4], i, tipo; 

    for(i = 1; i <= 3; ++i)
    {

        scanf("%d", lado[i]);

    }

    tipo = TipoTriangulo(lado[1], lado[2], lado[3]);

    switch (tipo)
    {
    
    case 1:
        printf("Equilatero\n");
        break;
    
    case 2:
        printf("Isosceles\n");
        break;

    case 3:
        printf("Escaleno\n");
        break;

    default:
        printf("Erro.\n");
        break;
    
    }

    return 0;
}