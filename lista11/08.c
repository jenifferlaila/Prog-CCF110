#include <stdio.h>

int RetornaSegundos(int horas, int minutos, int segundos)
{

    return ((horas * 3600) + (minutos * 60) + segundos);

}


int main()
{
    int hora, minuto, segundo;
    
    printf("Insira horas, minutos e segundos, respectivamente:\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    printf("Total em segundos: %d", RetornaSegundos(hora, minuto, segundo));

    return 0;

}