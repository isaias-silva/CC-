#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//variaveis struct
struct aluno
{
    char nome[20];
    int matricula;
    float nota;
};

int main()
{
    //numero de alunos
    int i = 0;
    int n;
    float s, m;
    printf("numero de alunos \t");
    scanf("%d", &n);

    //definindo struct

    struct aluno al[n];
    //repetição

    for (i = 0; i < n; i++)
    {
        printf(".....aluno..... %d", i + 1);
        //nome
        printf("\n nome: \t");
        setbuf(stdin, NULL); // pro fgets não fazer merda
        fgets(al[i].nome, 20, stdin);

        //matricula

        printf("\n matricula: \t");
        scanf("%d", &al[i].matricula);

        //nota

        printf("\n nota: \t");
        scanf("%f", &al[i].nota);
        (s = s + al[i].nota);
    }
    //gambiarra
    i = 0;
    //fim da gambiarra

    for (i = 0; i < n; i++)
    {
        printf("<<<<<<<<<< aluno %d >>>>>>>>>>>>\n \n", i + 1);
        printf("[nome].....%s", al[i].nome);

        printf("[matricula].....%d\n", al[i].matricula);

        printf("[nota].....%2.f \n \n", al[i].nota);
    }
    (m = s / i);

    printf("\n \n media dos alunos: %f \n \n", m);

    return 0;
}
