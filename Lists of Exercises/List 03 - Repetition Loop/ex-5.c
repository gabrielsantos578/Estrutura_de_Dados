/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
5ª  (WHILE) Faça um algoritmo que determine e escreva:   

- a maior idade dos habitantes

- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos 
inclusive e que tenham olhos verdes e cabelos louros.

O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.

*******************************************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>

int main() {
    
    int i, idade=0, dadoA=0, dadoB=0, o, c;
    char sexo;
    char olho[30], cabelo[30]; //Represente Louro (cabelo) por L e Verde (olho) por V
    
    while (idade > -1) {
        
        printf("\n");
        printf("Caso deseje encerrar, digite -1, caso não \n");
        printf("digite a idade: ");
        scanf("%d", &idade);
        
        if (idade == -1) {
            printf("Programa encerrado.\n");
            break;
            
        } else {
            
            printf("Informe o sexo (M/F): ");
            scanf(" %c", &sexo);
            printf("Informe a cor dos olhos: ");
            scanf("%s", olho);
            printf("Informe a cor do cabelo: ");
            scanf("%s", cabelo);
        
            if (dadoA < idade) {
                dadoA = idade;
            } 
            
            if (strcmp(olho, "verde") == 0) {
                o = 1;
            }
            if (strcmp(cabelo, "louro") == 0) {
                c = 1;
            }
        
            if (sexo == 'F' && (idade > 17 && idade < 36) && o && c) {
                dadoB++;
            }
            
        }
        
    };
    
    printf("\n");
    printf("A maior idade entre os habitantes é %i.\n", dadoA);
    printf("Há %i mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros.\n", dadoB);
    
    return 0;
}

