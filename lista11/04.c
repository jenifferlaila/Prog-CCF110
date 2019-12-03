#include<stdio.h>
#include<stdlib.h>
#define tam 50
typedef struct
{
    int codigo;
    int estoqueminimo, estoqueatual;
    char descricao[20];
}produtos;
int main()
{
    int i;
    produtos produto[tam];
    printf("Insira o código do produto, o estoque atual, o estoque mínimo, ")
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &produto[i].codigo);
        scanf("%d %d", &produto[i].estoqueminimo, &produto[i].estoqueatual);
        fgets(produto[i].descricao, sizeof(produto[i].descricao), stdin)
        if (produto[i].estoqueatual < produto[i].estoqueminimo)
        {
            printf("%d %d %d %s", produto[i].codigo, produto[i].estoqueminimo, produto[i].estoqueatual, produto[i].descricao);
        }
    }
    return 0;
}