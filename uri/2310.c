#include <stdio.h>
#include <stdlib.h>
int main()
{
  int N, i, j, tentativa[3], acerto[3], Asaque = 0, Abloqueio = 0, Aataque = 0;
  float psaque = 0, pbloqueio = 0, pataque = 0, saque = 0, bloqueio = 0, ataque = 0;
  char nome[10];
  scanf("%d", &N);
  for (i = 0; i < N; i++)
  {
    scanf("%s", nome);
    scanf("%d %d %d", &tentativa[0], &tentativa[1], &tentativa[2]);
    scanf("%d %d %d", &acerto[0], &acerto[1], &acerto[2]);
    saque = saque + tentativa[0];
    bloqueio = bloqueio + tentativa[1];
    ataque = ataque + tentativa[2];
    Asaque = Asaque + acerto[0];
    Abloqueio = Abloqueio + acerto[1];
    Aataque = Aataque + acerto[2];
  }
  psaque = (Asaque / saque)*100;
  pbloqueio = (Abloqueio / bloqueio)*100;
  pataque = (Aataque / ataque)*100;
  printf("Pontos de Saque: %.2f %.\n", psaque);
  printf("Pontos de Bloqueio: %.2f %.\n", pbloqueio);
  printf("Pontos de Ataque: %.2f %.\n", pataque);
  return 0;
}
