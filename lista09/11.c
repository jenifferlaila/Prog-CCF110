#include<stdio.h>
#include<stdlib.h>
int horario(int hora, int minuto, int segundo)
{
    int segundos;
    segundos = ((hora * 3600) + (minuto * 60) + segundos);
    return segundos;
} 

int main()
{
    int hora, minuto, segundo;
    scanf("%d %d %d", &hora, &minuto, &segundo);
}