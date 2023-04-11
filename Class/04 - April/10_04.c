/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define n 20

/*

Struct é a Estrutura de um "Objeto" (Modelo). Por ele ser um modelo, declaramos 
como global (fora da main), porém quando trabalharmos com dado, agora sim e 
dentro da main.

*/

struct Dados {
	int codigo;
	char nome[100]; // sempre ponha +1 que a necessidade, para o \0 (onde termina)
	float salario;
};

typedef struct Dados Dados; // nomeia esse modelo para Dados.

int main()
{
    
    Dados aluno[n]; // o número 22 é a quantidade de objeto que será salvo dentro do vetor aluno.
    int i;

/*
    aluno1.codigo = 1;
    aluno1.salario = 1000;
    strcpy(aluno1.nome, "Cristiano Pires Martins");// copia os elementros de uma string para outra string. Para string, usamos "", para char, ''.
    gets(); // mostra uma string por inteira, pois o printf mostra até o primeiro " " (espaço).
*/

    for (i=0; i < 2; i++) {

      printf("Código: "); scanf("%d", &aluno[i].codigo);
      printf("Nome: "); scanf("%s", aluno[i].nome);
      printf("Salário: "); scanf("%f", &aluno[i].salario);

    }
    
    printf("\n\n");

    for (i=0; i < 2; i++) {

      printf("Código.: %d\n", aluno[i].codigo);
      printf("Nome...: %s\n", aluno[i].nome);
      printf("Salário: %g\n\n", aluno[i].salario);

    }

    return 0;
    
}

