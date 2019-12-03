#include<stdio.h>
#include<stdlib.h>
int idade(int anos, int meses, int dias)
{
    int idadedias;
    idadedias = ((anos * 365) + (meses * 30) + dias);
    return idadedias;
}

int main()
{
    int anos, meses, dias;
    scanf("%d %d %d", &anos, &meses, &dias)
    printf("%d", idade(anos, meses, dias));
return 0;
}