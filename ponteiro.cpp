#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
a=10;
 int *p;//declara que é um ponteiro (*)
p=&a;//armazena o endereço apontando pra a.

printf("\n conteudo do endereço: %d",*p);//imprime oque esta armazenado no endereço(*)
printf("\n endereço: %d",p);//onde esta armazenado
printf("\n variavel dentro do endereço: %d",a);//variavel no endereço

return 0;
}
