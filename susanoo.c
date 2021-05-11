#include <stdio.h>
#include <stdlib.h>
int main()
{
    int idade, a = 1;
    char nome[30];
    do
    {
        printf("\n.......cadastro........\n");
        printf("nome:");
        fflush(stdin);
        fgets(nome, 30, stdin);
        fflush(stdin);
        printf("idade:");
        scanf("%d", &idade);
        fflush(stdin);
    } while (a > 0);

    return 0;
}
