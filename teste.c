#include<stdlib.h>
#include<stdio.h>


int main()
{ struct estudante {

char nome[30];
  int idade;
  int nMatricula;
  float mesalidade;
  };


struct estudante stud1, *ptr_stud1;

ptr_stud1 = &stud1;
printf("\n matricula:\t");
scanf("%d",&ptr_stud1->nMatricula);

printf("\n nome:\t");
scanf("%s",&ptr_stud1->nome);
printf("\n mensalidade:\t");
scanf("%f",&ptr_stud1 -> mesalidade);

printf("\n idade:\t");
scanf("%d", &ptr_stud1->idade);




return 0;}
