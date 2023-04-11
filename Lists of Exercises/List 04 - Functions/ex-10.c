/******************************************************************************

                  04 - Lista de Exercícios - Funções
                
10ª Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou 
Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH.
Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
 . C= 5.(F-32)/9
 . F= (9.C/5) + 32

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define g 1000000

float converteCelsiusFahrenheit(int n);
float converteFahrenheitCelsius(int n);

int main() {
    
    char c;
    float t;
    
    printf("Qual escala termométrica deseja utilizar: \n\n");
    printf("  (c) = Célsius.\n\n");
    printf("  (f) = Fahrenheit.\n\n");
    printf("Escala: ");
    scanf("%c", &c);
    printf("\n");
    
    switch( c ) {
        
        case 'f':
            printf("Informe a temperatura: (°F) ");
            scanf("%f", &t);
            printf("\n");
            printf("Temperatura: %g °C\n", converteFahrenheitCelsius(t));
            break;
            
        case 'c':
            printf("Informe a temperatura: (°C) ");
            scanf("%f", &t);
            printf("\n");
            printf("Temperatura: %g °F\n", converteCelsiusFahrenheit(t));
            break;
            
        //default:
            //printf("Informe a escala!\n");
            
    }
    
    return 0;
}

float converteCelsiusFahrenheit(int n) {
    
    float F= ((9 * n) / 5) + 32;
    return F;
    
};

float converteFahrenheitCelsius(int n) {
    
    float C= (5 * (n - 32)) / 9;
    return C;
    
};
