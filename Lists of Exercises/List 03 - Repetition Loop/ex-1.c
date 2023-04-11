/******************************************************************************

                03 - Lista de Exercícios - Laço de Repetição
                
1ª  (WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos 
alunos de uma classe. O algoritmo deverá ler, além das notas, o código do aluno 
e deverá ser encerrado quando o código for igual a zero.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    
    float nota1, nota2, nota3, media;
    int codigo = 1;
    
    while(codigo != 0) {
        
        printf("\n");
        printf("-------------------------------------------------------------------\n");
        printf("\n");
        
        printf("Informe o código do aluno: ");
        scanf("%d", &codigo);
        
        if (codigo == 0) {
            printf("Programa encerrado.\n");
            printf("\n");
            printf("-------------------------------------------------------------------\n");
           
            break;
            
        } else if (codigo == 0001) {
            
            printf("Informe a nota do primeiro bimestre: ");
            scanf("%f", &nota1);
            printf("Informe a nota do segundo bimestre: ");
            scanf("%f", &nota2);
            printf("Informe a nota do terceiro bimestre: ");
            scanf("%f", &nota3);
    
            media = (nota1 + nota2 + nota3) / 3;
            
            printf("\n");
            printf("Código do(a) Aluno(a): 0001.\n");
            printf("Nome do(a) Aluno(a): Maria J. Leopoudina.\n");
            printf("Nota do(a) Aluno(a): 1B = %g, 2B = %g, 3B = %g, MA = %g.\n", nota1, nota2, nota3, media);
            
        } else if (codigo == 0002) {
            
            printf("Informe a nota do primeiro bimestre: ");
            scanf("%f", &nota1);
            printf("Informe a nota do segundo bimestre: ");
            scanf("%f", &nota2);
            printf("Informe a nota do terceiro bimestre: ");
            scanf("%f", &nota3);
    
            media = (nota1 + nota2 + nota3) / 3;
            
            printf("\n");
            printf("Código do(a) Aluno(a): 0002.\n");
            printf("Nome do(a) Aluno(a): D. Pedro III A. Rhotaviérk.\n");
            printf("Nota do(a) Aluno(a): 1B = %g, 2B = %g, 3B = %g, MA = %g.\n", nota1, nota2, nota3, media);
            
        } else if (codigo == 0003) {
            
            printf("Informe a nota do primeiro bimestre: ");
            scanf("%f", &nota1);
            printf("Informe a nota do segundo bimestre: ");
            scanf("%f", &nota2);
            printf("Informe a nota do terceiro bimestre: ");
            scanf("%f", &nota3);
    
            media = (nota1 + nota2 + nota3) / 3;
            
            printf("\n");
            printf("Código do(a) Aluno(a): 0003.\n");
            printf("Nome do(a) Aluno(a): Alex U. L. Makery.\n");
            printf("Nota do(a) Aluno(a): 1B = %g, 2B = %g, 3B = %g, MA = %g.\n", nota1, nota2, nota3, media);
            
        } else if (codigo == 0004) {
            
            printf("Informe a nota do primeiro bimestre: ");
            scanf("%f", &nota1);
            printf("Informe a nota do segundo bimestre: ");
            scanf("%f", &nota2);
            printf("Informe a nota do terceiro bimestre: ");
            scanf("%f", &nota3);
    
            media = (nota1 + nota2 + nota3) / 3;
            
            printf("\n");
            printf("Código do(a) Aluno(a): 0004.\n");
            printf("Nome do(a) Aluno(a): Emilya I. Giovanny.\n");
            printf("Nota do(a) Aluno(a): 1B = %g, 2B = %g, 3B = %g, MA = %g.\n", nota1, nota2, nota3, media);
            
        } else if (codigo == 0005) {
            
            printf("Informe a nota do primeiro bimestre: ");
            scanf("%f", &nota1);
            printf("Informe a nota do segundo bimestre: ");
            scanf("%f", &nota2);
            printf("Informe a nota do terceiro bimestre: ");
            scanf("%f", &nota3);
    
            media = (nota1 + nota2 + nota3) / 3;
            
            printf("\n");
            printf("Código do(a) Aluno(a): 0005.\n");
            printf("Nome do(a) Aluno(a): Mr. Otávio J. Faguti.\n");
            printf("Nota do(a) Aluno(a): 1B = %g, 2B = %g, 3B = %g, MA = %g.\n", nota1, nota2, nota3, media);
            
        } else {
            printf("O código informado não foi encontrado no Banco de Dados.\n");
            
        }
        
    }
    
    return 0;
}
