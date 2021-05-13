#include <stdio.h>
#include <stdlib.h>
#include <iostream>
//definindo struct
typedef struct estrutura
{
    char nome[31];                      //nome
    int idade;                          //idade
    float nota;                         //nota
    struct estrutura *ponteiro_proximo; // ponteiro que ira apontar para o proximo elemento da lista
} estruta;                              //definindo o nome da struct para estrutura

int main() //função inicial
{
    int resp;                                         //variavel que serviará como resposta para inserir mais itens a lista
    int q = 0;                                        //usada para marcar a quantidade de itens na lista
    float s = 0;                                      //usada para a soma das notas de cada item
    estrutura *inicial;                               // aponta para o primeiro item
    estrutura *proxima;                               //aponta para o proximo
    inicial = (estrutura *)malloc(sizeof(estrutura)); //criando a estrutura

    if (inicial == NULL) // se a estrutura inicial for nula
    {
        printf("vazio");
        exit(1);
    }
    proxima = inicial; //proxima e inicial criam estruturas iguais

    while (1) //enquanto 1
    {
        printf("\n nome: \t");
        setbuf(stdin, NULL); // pro fgets não fazer merda
        fgets(proxima->nome, 30, stdin);
        fflush(stdin);
        printf("\n idade: ");
        scanf("%d", &proxima->idade);
        printf("\n nota:");
        scanf("%f", &proxima->nota);
        (s = s + proxima->nota); //soma notas
        (q = q + 1);             //quantifica itens

        printf("\n deseja adicionar mais valores? <1>SIM  <2>NÂO \t"); //questao
        scanf("%d", &resp);
        if (resp == 1) //se for sim
        {
            proxima->ponteiro_proximo = (estrutura *)malloc(sizeof(estrutura)); //proximo cria
            proxima = proxima->ponteiro_proximo;
        }
        else       //se nao
            break; //repetição while acaba
    }
    proxima->ponteiro_proximo = NULL; //inicial aponta pra NULL
    proxima = inicial;                //inicial sendo definido como primeiro

    //imprimindo

    while (proxima != NULL)
    {
        printf("\n Nome: %s", proxima->nome);
        printf(" idade: %d\n", proxima->idade);
        printf(" nota: %.2f\n", proxima->nota);
        proxima = proxima->ponteiro_proximo;
    }
    printf("\n <<<<<<< Media dos alunos : %.1f >>>>>>>>>>\n", s / q);

    return 0;
}
