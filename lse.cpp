#include <stdlib.h>
#include <stdio.h>
#include <iostream>

//criando nossa estrutura
typedef struct no No;
struct no
{
    int num;
    struct no *prox;
};

//função criar no começa com No* pois retornara um valor "No"
No *criar_no()
{
    No *novo = (No *)malloc(sizeof(No)); // recebe a quantidade de bits do novo no;
    return novo;
}

No *inserir_no_inicio(No *lista, int dado)
{
    No *novo_no = criar_no(); //cria a nova estrutura no
    novo_no->num = dado;      // novo no recebe dado

    if (lista == NULL) //se estiver vazia
    {
        lista = novo_no;      //lista recebe novo no
        novo_no->prox =NULL; //novo no aponta para Null
    }
    else //se a lista nao estiver vazia
    {
        novo_no->prox=lista; //aponta para o novo elemento
       lista = novo_no;
       
       
     
     }
    return lista;
}
void imprimir(No *lista)
{
    No *auxiliar = lista;

    while (auxiliar != NULL)
    {
        printf("\n valor= %d \n", auxiliar->num);
        auxiliar= auxiliar->prox;
    }
}

int main()
{
    No *lista = NULL; //lista inicialmente vazia;

      lista = inserir_no_inicio(lista,20);
    lista = inserir_no_inicio(lista, 30);
    imprimir(lista);

    return 0;
}