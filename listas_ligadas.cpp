#include <stdio.h>
#include <stdlib.h>

//definindo struct
typedef struct ponto
{
    int x, y;//variaveis da struct
    struct ponto *prox;// ponteiro que ira apontar para o proximo elemento da lista
} t_ponto; //definindo o nome da struct para t_ponto

int main()//função inicial
{
    int resp;//resposta
    t_ponto *ini_ponto;//ponteiro que marca o inicio da listas
    t_ponto *proximo_ponto;//ponteiro que marca o proximo ponto
    ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));//aloca memoria para o elemento
    if (ini_ponto == NULL)//se estiver vazio
    {
        exit(1);//sair
    }
    proximo_ponto = ini_ponto;//igual a iniponto os dois armazenarão o mesmo tipo de info
    while (1)//enquanto 1
    {
        printf("\n digite o x: ");
        scanf("%d", &proximo_ponto->x);//envia para a variavel da struct
        printf("\n digite o y: ");
        scanf("%d", &proximo_ponto->y);
        printf("\n deseja adicionar mais valores? <1>SIM  <2>NÂO \t");
        scanf("%d", &resp);
        if (resp == 1)

        {
            proximo_ponto->prox = (t_ponto *)malloc(sizeof(t_ponto));
            proximo_ponto = proximo_ponto->prox;
        }
        else
            break;
    }
    proximo_ponto->prox = NULL;
    proximo_ponto = ini_ponto;

    while (proximo_ponto != NULL)
    {
        printf("\n x: %d \n y: %d \n", proximo_ponto->x, proximo_ponto->y);
        proximo_ponto=proximo_ponto->prox;
    }
    return 0;
}
