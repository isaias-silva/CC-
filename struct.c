#include <stdio.h>

struct cadastro
{
    char nome[50];
    int idade;
    float pontos;
};

int main()
{
    int i = 0;
    int n;
    printf("numero de jogadores:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct cadastro jogador[i];
        printf("\n jogador %d \t", i + 1);
        printf("\n nome: \t");
        setbuf(stdin, NULL);
        fgets(jogador[i].nome, 50, stdin);
        printf("\n idade: \t");
        scanf("%d", &jogador[i].idade);
        printf("\n pontos: \t");
        scanf("%f", &jogador[i].pontos);
    }

    return 0;
}
