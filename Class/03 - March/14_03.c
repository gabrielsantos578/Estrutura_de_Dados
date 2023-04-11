/******************************************************************************

Data: 14/03.
Exercício - Matriz de 1D (linha).

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 1000

/*int main () {

    int vetor[19], idade;

    for (int i=0; i < n; i++) {

        printf("Digite a idade do aluno: ");
        scanf("%d", &vetor[i]);

    }

    for (int i=0; i < n; i++) {

        idade = vetor[i];
        int m = 0;
        
        while (m < n) {
            
            if (idade >= vetor[m]) {
                m++;
                
            } else {
                break;
                
            }
            
        }
        
        if(m == n) {
            
            printf("\n");
            printf("A maior idade é %d anos.\n", idade);
            break;
            
        }


    }

    return 0;

}*/

int main () {

    int vetor[n], idade;
    float salario[n], total=0;
    
    srand(time(NULL)); //Gera uma nova semente para o rand.

    for (int i=0; i < n; i++) {
        salario[i]=rand()%10001+90000; //Gera Nº aleatório de 10 a 20, porém sempre com a mesma semente (números).
        total += salario[i];
    }
    
    /*for (int i=0; i < n; i++) {
        printf("Idade do %dº: %d.\n", i+1, vetor[i]);
    }*/
    
    for (int i=0; i < n; i++) {
        printf("Salário (%d): R$ %g.\n", i+1, salario[i]);
    }
    
    printf("Média Salário R$ %g.\n", total/n);
    
    for (int i=0; i < n; i++) {
        
        if(salario[i]<50000)
            printf("Menor Salário R$ %g.\n", salario[i]);
        
    }
    
    return 0;

}
