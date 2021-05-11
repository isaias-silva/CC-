#include <stdio.h>
#include <stdlib.h>
float soma(float s1, float s2, float s)
{
    printf("\n............função soma..........\n");
    s = s1 + s2;
    return s;
}

float subtracao(float s1, float s2, float s)
{
    printf("\n............função subtração..........\n");
    s = s1 - s2;
    return s;
}

float multiplicacao(float s1, float s2, float s)
{
    printf("\n............função Multiplicação..........\n");
    s = s1 * s2;
    return s;
}

float divisao(float s1, float s2, float s)
{
    printf("\n............divisao..........\n");
    s = s1 / s2;
    return s;
}

int main()
{
    float s1, s2, s;
    int num, repeat = 1;
    do
    {
        printf(".................4 operações......................\n");

        printf("escolha:\n");
        printf("1........soma\n");
        printf("2........subtração\n");
        printf("3........multiplicação\n");
        printf("4........divisão\n");
        scanf("%d", &num);
        printf("\n..............opção %d............\n", num);
        printf("n1:");
        scanf("%f", &s1);
        printf("n2:");
        scanf("%f", &s2);
        if (num == 1)
        {
            s = soma(s1, s2, s);
        }
        if (num == 2)
        {
            s = subtracao(s1, s2, s);
        }
        if (num == 3)
        {
            s = multiplicacao(s1, s2, s);
        }
        if (num == 4)
        {
            s = divisao(s1, s2, s);
        }

        printf("o resultado é %.2f \n \n \n", s);

    }

    while (repeat > 0);
    return 0;
}
