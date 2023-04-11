/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
4ª  (FOR) Foi feita uma pesquisa entre os habitantes de uma região. Foram 
coletados os dados de idade, sexo (M/F) e salário. Faça um algoritmo que informe 
de 15 pessoas:  

a) a média de salário do grupo;

b) maior e menor idade do grupo;

c) quantidade de mulheres com salário até R$100,00.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    
    int i, dadoB1=0, dadoB2=999, dadoC=0, idade;
    float dadoA, salario;
    char sexo;
    
    for (i=1;i<=15;i++) {
        
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o salário: R$");
        scanf("%f", &salario);
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        
        dadoA += salario;
        
        if (dadoB1 < idade) {
            dadoB1 = idade;
        } 
        
        if (dadoB2 > idade) {
            dadoB2 = idade;
        }
        
        if (sexo == 'F' && salario <= 100) {
            dadoC++;
        }
        
    };
    
    printf("\n");
    printf("A média salarial é de R$%g.\n", dadoA/(i-1));
    printf("A maior idade entre os integrante é %i.\n", dadoB1);
    printf("A menor idade entre os integrante é %i.\n", dadoB2);
    printf("A quantidade de mulheres com salário até R$100,00 é %i.\n", dadoC);
    
    return 0;
}


