#include <stdio.h>


int Media(int nota1, int nota2, int nota3)
{

    return ((nota1 + nota2 + nota3) / 3);

}


int main()
{

    int n1, n2, n3;

    printf("Insira as notas do aluno:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Media do aluno: %d\n", Media(n1, n2, n3));

    return 0;

}