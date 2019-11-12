#include <stdio.h>

int main()
{
  int cliente[50], indicec, indicev;
  double faturamento, valor[50];
  indicec = 0; indicev = 0, faturamento = 0;

  scanf("%d", cliente[0]);
  scanf("%lf", valor[0]);

  while(cliente[indicec] >= 0)
  {
    faturamento = faturamento + valor[indicev];

    indicec = indicec + 1;
    indicev = indicev + 1;

    scanf("%d", cliente[indicec]);
    scanf("%lf", valor[indicev]);
  }

  printf("O faturamento foi de : %1.f\n", faturamento);

  return 0;
}

//
