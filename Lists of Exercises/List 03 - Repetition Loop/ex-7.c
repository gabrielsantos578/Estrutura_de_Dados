/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
7ª (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

 a) média do salário da população;

 b) média do número de filhos;

 c) maior salário;

 d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo.  

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int i=1, filho, perc=0, dadoB=0;
    float salario=-1, dadoA=0, dadoC=0, dadoD=0;
    
    while (1) {
        
        printf("Digite o salário do habitante: ");
        scanf("%f", &salario);
        
        if(salario<0.0) {
            
            break;
            
        } else {
            
            printf("Digite a quantidade de filhos: ");
            scanf("%i", &filho);
            printf("\n");
            
            dadoA += salario;
            dadoB += filho;
            
            if(dadoC < salario) {
                dadoC = salario;
            }
            
            if (salario <= 100) {
                perc++;
            }
            
            i++;
            
        }
        
    };
    
    dadoD = perc;
    dadoD = (dadoD/(i-1))*100;
    
    printf("\n");
    printf("Média Salarial: R$%g.\n", dadoA/(i-1));
    printf("Média de Filhos: %i.\n", dadoB/(i-1));
    printf("Maior Salário: R$%g.\n", dadoC);
    printf("Percentual: %g.\n", dadoD);
    printf("\n");
    printf("Programa Encerrado.");
    
    return 0;
}

