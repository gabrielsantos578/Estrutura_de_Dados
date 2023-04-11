/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
2ª Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: 
"São múltiplos" ou "Não são múltiplos".

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, cond;
    
    printf("Informe um número: ");
    scanf("%d", &num1);
    printf("Informe um outro número: ");
    scanf("%d", &num2);
    
    cond = num1 % num2;
    
    if(cond != 0) {
        printf("Não são múltiplos.\n");
        
    } else {
        printf("São múltiplos.\n");
        
    }
    
    return 0;
}
