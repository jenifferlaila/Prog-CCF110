#include <stdio.h>

int main()
{
    float tabPreco[3], qntdVendas[3], faturamento = 0;
    int i;
    printf("Insira os valores da tabela de preços para:\n");
    for (i=0; i<3; i++)
    {
        printf("o produto numero %d: ", i + 1);
        scanf("%f\n", &tabPreco[i]);
    }
    
    for (i=0; i<3; i++)
    {
        printf("Insira a quantidade de vendas do produto %d: ", i+1);
        scanf("%f\n", &qntdVendas[i]);
        faturamento = faturamento + (tabPreco[i]*qntdVendas[i]);
        
    }
    printf("%.2f", faturamento);
    return 0;
}