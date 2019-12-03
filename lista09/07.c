#include<stdio.h>
#include<stdlib.h>
char categoria(int idade)
{
    char A, B, C, D, E;
    if((idade >= 5) && (idade <= 7))
    {
        return 'A';
    }
    if((idade >= 8) && (idade <= 10))
    {
        return 'B';
    }
    if((idade >= 11) && (idade <= 13))
    {
        return 'C';
    }
    if((idade >= 13) && (idade <= 17))
    {
        return 'D';
    }
    if((idade >= 18)
    {
        return 'E';
    }
}

int main()
{
    int idade;
    scanf("%d", idade);
    printf("%s", categoria(idade));
return 0;
}