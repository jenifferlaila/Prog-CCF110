#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;

  FILE *arquivop;
  arquivop = fopen("pares.txt", "w+b");

  FILE *arquivon;
  arquivon = fopen("numeros.txt", "r");

  if ((arquivop == NULL) || (arquivon == NULL))
  {
    printf("Não foi possível abrir o arquivo\n");
  }
  else{
    while (!feof(arquivon))
    {
      fscanf(arquivon, "%d", &n);
      if (n %2 == 0)
      {
      fwrite(&n, sizeof(n), 1, arquivop);
      fputc("\n", (arquivop));
      }
    }
  }

fclose(arquivop);
fclose(arquivon);
return 0;
}
