/*

Exercício:

    - Ordenar por nota.
    
    - Ordernar por nome.

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define n 5


struct Dados {
	int codigo;
	char nome[100];
	float nota;
};

typedef struct Dados Dados; 


int mostrarOpcao(int *opcao);
int preencherListaObjeto(Dados aluno[]);
int ordenarListaObjetoCodigo(Dados aluno[]);
int ordenarListaObjetoNome(Dados aluno[]);
int ordenarListaObjetoNota(Dados aluno[]);
int mostrarListaObjeto(Dados aluno[]);
int encerrarPrograma();


int main()
{
    
    Dados aluno[n];
    int opcao, tolerancia=0;
    
    preencherListaObjeto(aluno);
    
    while (1) {
        
        mostrarOpcao(&opcao);
        
        if (opcao == 1) {
            
            preencherListaObjeto(aluno);
            
        } else if (opcao == 2) {
            
            mostrarListaObjeto(aluno);
            
        } else if (opcao == 3) {
            
            ordenarListaObjetoCodigo(aluno);
            
        } else if (opcao == 4) {
            
            ordenarListaObjetoNome(aluno);
            
        } else if (opcao == 5) {
            
            ordenarListaObjetoNota(aluno);
            
        } else if (opcao == 0) {
            
            printf("\n");
            encerrarPrograma();
            break;
            
        } else {
            
            tolerancia++;
            printf("\n");
            
            if (tolerancia > 2) {
                
                printf("Use o software corretamente!\n\n");
                encerrarPrograma();
                break;
                
            }
            
            printf("A opção informada não existe!\n\n");
            
        }
        
    }
    

    return 0;
    
}


int mostrarOpcao(int *opcao) {
    
    printf("\n------------ Opções ------------\n\n");
    printf("[1] Preencher  Lista\n");
    printf("[2] Listar     Lista\n");
    printf("[3] Ordenar    Lista (Código)\n");
    printf("[4] Ordenar    Lista (Nome)\n");
    printf("[5] Ordenar    Lista (Nota)\n");
    printf("[0] Encerrar   Programa\n");
    printf("\n\n");
    
    scanf("%d", opcao);
    
    return 0;
    
};

int preencherListaObjeto(Dados aluno[]) {
    
    for (int i=0; i < n; i++) {
        
        printf("RA..: "); scanf("%d", &aluno[i].codigo);
        printf("Nome: "); scanf(" %99[^\n]", aluno[i].nome);
        scanf("%*[^\n]"); /* Lê todos os caracteres "indesejados" e descarta os mesmos, exceto o '\n' */
        scanf("%*c"); /* Lê o caractere '\n' e descarta o mesmo, limpando assim o stdin */ 
        printf("Nota: "); scanf("%f", &aluno[i].nota);
        printf("\n");
        
    } printf("\n\n");
    
    return 0;
    
};

int ordenarListaObjetoCodigo(Dados aluno[]) {
    
    for (int i=0; i < (n-1); i++) {
        
        //printf("%g  >  %g\n\n", aluno[i].codigo, aluno[i+1].codigo);
            
        if (aluno[i].codigo > aluno[i+1].codigo) {
            
            Dados auxiliar;
            auxiliar.codigo = aluno[i].codigo;
            auxiliar.nota = aluno[i].nota;
            strcpy(auxiliar.nome, aluno[i].nome);
            //printf("Nome... Auxiliar: %s\n", auxiliar.nome);
            
            //strcpy(aluno[i].nome, "");
            //printf("Nome... Aluno[i]: %s\n", aluno[i].nome);
            
            aluno[i].codigo = aluno[i+1].codigo;
            aluno[i].nota = aluno[i+1].nota;
            strcpy(aluno[i].nome, aluno[i+1].nome);
            //printf("Nome... Aluno[i]: %s\n", aluno[i].nome);
            
            //strcpy(aluno[i+1].nome, "");
            //printf("Nome... Aluno[i+1]: %s\n", aluno[i+1].nome);
            
            aluno[i+1].codigo = auxiliar.codigo;
            aluno[i+1].nota = auxiliar.nota;
            strcpy(aluno[i+1].nome, auxiliar.nome);
            //printf("Nome... Aluno[i+1]: %s\n", aluno[i+1].nome);
            
            i = -1;
            
        }
        
    }
    
};

int ordenarListaObjetoNome(Dados aluno[]) {
    
    for (int i=0; i < (n-1); i++) {
        
        //printf("%g  >  %g\n\n", aluno[i].nome, aluno[i+1].nome);
        
        int comparacao;
        //comparacao = strcmp(aluno[i+1].nome, aluno[i].nome);
        //printf("%d\n\n", comparacao);
        comparacao = strcmp(aluno[i].nome, aluno[i+1].nome);
        //printf("%d\n\n", comparacao);
            
        if (comparacao > 0) {
            
            Dados auxiliar;
            auxiliar.codigo = aluno[i].codigo;
            auxiliar.nota = aluno[i].nota;
            strcpy(auxiliar.nome, aluno[i].nome);
            
            //printf("Código. Auxiliar: %d\n", auxiliar.codigo);
            //printf("Nome... Auxiliar: %s\n", auxiliar.nome);
            //printf("Salário Auxiliar: %g\n\n", auxiliar.nota);
            
            aluno[i].codigo = aluno[i+1].codigo;
            aluno[i].nota = aluno[i+1].nota;
            strcpy(aluno[i].nome, aluno[i+1].nome);
            
            //printf("Código. Aluno[i]: %d\n", aluno[i].codigo);
            //printf("Nome... Aluno[i]: %s\n", aluno[i].nome);
            //printf("Salário Aluno[i]: %g\n\n", aluno[i].nota);
            
            aluno[i+1].codigo = auxiliar.codigo;
            aluno[i+1].nota = auxiliar.nota;
            strcpy(aluno[i+1].nome, auxiliar.nome);
            
            //printf("Código. Aluno[i+1]: %d\n", aluno[i+1].codigo);
            //printf("Nome... Aluno[i+1]: %s\n", aluno[i+1].nome);
            //printf("Salário Aluno[i+1]: %g\n\n", aluno[i+1].nota);
            
            i = -1;
            
        }
        
    }
    
};

int ordenarListaObjetoNota(Dados aluno[]) {
    
    for (int i=0; i < (n-1); i++) {
        
        //printf("%g  >  %g\n\n", aluno[i].nota, aluno[i+1].nota);
            
        if (aluno[i].nota > aluno[i+1].nota) {
            
            Dados auxiliar;
            auxiliar.codigo = aluno[i].codigo;
            auxiliar.nota = aluno[i].nota;
            strcpy(auxiliar.nome, aluno[i].nome);
            
            //printf("Código. Auxiliar: %d\n", auxiliar.codigo);
            //printf("Nome... Auxiliar: %s\n", auxiliar.nome);
            //printf("Salário Auxiliar: %g\n\n", auxiliar.nota);
            
            aluno[i].codigo = aluno[i+1].codigo;
            aluno[i].nota = aluno[i+1].nota;
            strcpy(aluno[i].nome, aluno[i+1].nome);
            
            //printf("Código. Aluno[i]: %d\n", aluno[i].codigo);
            //printf("Nome... Aluno[i]: %s\n", aluno[i].nome);
            //printf("Salário Aluno[i]: %g\n\n", aluno[i].nota);
            
            aluno[i+1].codigo = auxiliar.codigo;
            aluno[i+1].nota = auxiliar.nota;
            strcpy(aluno[i+1].nome, auxiliar.nome);
            
            //printf("Código. Aluno[i+1]: %d\n", aluno[i+1].codigo);
            //printf("Nome... Aluno[i+1]: %s\n", aluno[i+1].nome);
            //printf("Salário Aluno[i+1]: %g\n\n", aluno[i+1].nota);
            
            i = -1;
            
        }
        
    }
    
    return 0;
    
};

int mostrarListaObjeto(Dados aluno[]) {
    
    printf("\n");
    for (int i=0; i < n; i++) {
        
      printf("RA..: %d\n", aluno[i].codigo);
      printf("Nome: %s\n", aluno[i].nome);
      printf("Nota: %g\n\n", aluno[i].nota);
        
    } printf("\n\n");
    
    return 0;
    
};

int encerrarPrograma() {
    
    printf("Programa Encerrado!!!");
    
    return 0;
    
};
