#include<stdio.h>
#include<stdlib.h>
int comparador(char letra)
{
    char vogal = {'a', 'e', 'i', 'o', 'u'};
    for (i = 0; i < 5; i++)
    {
        if(letra == vogal)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }    
}

int main()
{
    char letra;
    fgets(letra, sizeof(letra), stin);
    return 0;
}