#include <stdio.h>
#include <math.h>

double Delta(int a, int b, int c)
{

    return ((b * b) - ( 4 * a * c));

}


int Resolve(int a, int b, int c, double *raiz1, double *raiz2)
{

    double delta;

    delta = Delta(a, b, c);

    if(delta < 0)
    {

        printf("Delta é negativo. Não foi possível calcular.\n");
        return 2;

    }

    else if (delta == 0)
    {

        *raiz1 = (-b + (sqrt(delta))) / 2;
        return 1;

    }

    else
    {

        *raiz1 = (-b + (sqrt(delta))) / 2;
        *raiz2 = (-b - (sqrt(delta))) / 2;
        return 0;

    }

}


int main()
{

    int a, b, c, flag;
    double raiz1, raiz2;

    printf("Insira a, b & c:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    flag = Resolve(a, b, c, &raiz1, &raiz2);

    if(flag == 1)
    {

        printf("Delta = %lf\nRaiz 1 = %lf\n", Delta(a, b, c), raiz1);
        
    }

    else if(flag == 0)
    {

        printf("Delta = %lf\nRaiz 1 = %lf\nRaiz 2 = %lf", Delta(a, b, c), raiz1, raiz2);

    }

    return 0;

}