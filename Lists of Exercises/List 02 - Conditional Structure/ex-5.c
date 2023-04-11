/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
5ª  Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino 
e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando 
as seguintes fórmulas:

- para homens: (72.7*h)-58

- para mulheres: (62.1*h)-44.7

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso;
    char sexo;
    
    printf("Informe o sexo (M/F): ");
    scanf(" %c", &sexo);
    printf("Informe a altura: ");
    scanf("%f", &altura);
    
    if(sexo == 'M') {
        peso = (72.7 * altura) - 58;
    
        printf("Sua massa corpórea ideal é de %gkg.\n", peso);
        
    } else if(sexo == 'F') {
        peso = (62.1 * altura) - 44.7;
    
        printf("Sua massa corpórea ideal é de %gkg.\n", peso);
        
    } else {
        printf("O sexo informado não existe.\n");
        
    }
    
    return 0;
}

