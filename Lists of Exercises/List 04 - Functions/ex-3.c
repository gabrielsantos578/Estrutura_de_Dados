/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
3ª Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma 
equação do 2o grau:

 . ax² + bx + c=0.
 
 . Para ela existir, o coeficiente 'a' deve ser diferente de zero.
 
 . Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta 
seja negativo, as reais serão complexas e da forma: x + iy

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

void avaliaNumeroParImpar(int n);
int avaliaNumeroPositivoNegativo(int num);
float calculaDelta(int a, int b, int c);

int main() {
    
    float a, b, c, delta;
    float x1, x2;
        
    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (avaliaNumeroPositivoNegativo(a) == 0) {
        
        printf("A variável A não pode ser 0!");
        
    } else {
        
        delta = calculaDelta(a, b, c);
        
        if (avaliaNumeroPositivoNegativo(delta) == -1) {
            
            b = (b*-1) / (2 * a);
            delta =  (delta*-1) / (2 * a);
            
            printf("X¹ = %g + %gi\n", b, delta);
            printf("X² = %g - %gi\n", b, delta);
            
        } else if (avaliaNumeroPositivoNegativo(delta) == 1) {
            
            x1 = ((b * -1)  + pow(delta, 0.5)) / (2 * a);
            x2 = ((b * -1)  - pow(delta, 0.5)) / (2 * a);
            
            printf("X¹ = %g\n", x1);
            printf("X² = %g\n", x2);
            
        } else {
            
            x1 = (b * -1) / (2 * a);
            
            printf("X = %g\n", x1);
            
        }
        
    }
    
    return 0;
}

void avaliaNumeroParImpar(int n) {
    
    if (n%2==0) {
        printf("Número Par.\n");
    } else {
        printf("Número Ímpar.\n");
    }
    
};

int avaliaNumeroPositivoNegativo(int num) {
    
    if (num > 0) {
        return 1;
    } else if (num < 0) {
        return -1;
    } else {
        return 0;
    }
    
};

float calculaDelta(int a, int b, int c) {
    
    float delta;
    
    delta = pow(b, 2) - (4 * a * c);
    
    return delta;
    
};
