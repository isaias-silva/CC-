#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// criar struct no
typedef struct no No; //nomeando a struct no de No apenas.
struct no
{
    int num;            // valor
    struct no *proximo; //ponteiro da struct no aponta para o proximo
};

No *criar_no() //função de criar um no
{
    No *novo = (No *)malloc(sizeof(No));
    return novo;
} 

No *inserir_no_inicio(No *lista, int valor) //valor sera inserido no começo
{
    No *novo_no = criar_no();
    novo_no->num = valor;
    if (lista == NULL) //se a lista estiver vazia
    {
        
        novo_no->proximo = NULL;
    }
    else //se nao vai para o proximo
    {
        novo_no->proximo = lista;
        lista = novo_no;
    }
    return lista;
}

void imprimir_lista(No *lista)
{
    No *auxiliar = lista;
    while (auxiliar != NULL)
    {
        printf("valor: %d ", auxiliar->num);
        cout << endl;
        auxiliar = auxiliar->proximo;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    No *lista = NULL;
    int n, i;
    for (i = 0; i < 3; i++)
    {   
        printf("digite um valor: \t");
        scanf("%d", &n);
       
        lista = inserir_no_inicio(lista, n);
    }
     cout << "**Prática 1**" << endl;
    imprimir_lista(lista);

    cout << endl;
    return 0;
}