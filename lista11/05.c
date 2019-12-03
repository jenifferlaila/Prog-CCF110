#include<stdio.h>
#include<stdlib.h>
#define tam 50
typedef struct
{
    int codigo, horario, quantpassageiros;
    int valor;
    char origem, destino, procurado;
}voos;

int main ()
{
    voos voo[tam];
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d %d %d %d", &voo[i].codigo, &voo[i].horario, &voo[i].quantpassageiros, &voo[i].valor);
        fgets(voo[i].origem, sizeof(voo[i].origem), stdin);
        fgets(voo[i].destino, sizeof(voo[i].destino), stdin);
    }
    fgets(voo[i].procurado, sizeof(voo[i].procurado), stdin);
    for (i = 0; i < tam; i++)
    {
        if (voo[i].procurado == voo[i].origem)
        {
            printf("% d %d %d %d %s %s", voo[i].valor, voo[i].codigo, voo[i].horario, voo[i].quantpassageiros, voo[i].origem, voo[i].destino)
        }
    }    
 return 0;
}
