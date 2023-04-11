/******************************************************************************

                02 - Lista de Exercícios - Estrutura Condicional
                
4ª  O cardápio de uma lanchonete é o seguinte:

Especificação	  Código	Preço
Cachorro quente	  100	    1,20
Bauru simples	  101	    1,30
Bauru com ovo	  102	    1,50
Hambúrger	      103	    1,20
Cheeseburguer	  104	    1,30
Refrigerante	  105	    1,00

Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule 
o valor a ser pago por aquele lanche. Considere que a cada execução somente será 
calculado um item.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int codigo, quantidade;
    float preco;
    
    printf("Informe o código do produto: ");
    scanf("%d", &codigo);
    
    if(codigo == 100) {
        preco = 1.2;
        printf("Código Produto: 100.\n");
        printf("Nome Produto: Cachorro Quente.\n");
        printf("Preço Produto: R$1,20.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else if(codigo == 101) {
        preco = 1.3;
        printf("Código Produto: 101.\n");
        printf("Nome Produto: Bauru Simples.\n");
        printf("Preço Produto: R$1,30.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else if(codigo == 102) {
        preco = 1.5;
        printf("Código Produto: 102.\n");
        printf("Nome Produto: Bauru com Ovo.\n");
        printf("Preço Produto: R$1,50.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else if(codigo == 103) {
        preco = 1.2;
        printf("Código Produto: 103.\n");
        printf("Nome Produto: Hambúrguer.\n");
        printf("Preço Produto: R$1,20.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else if(codigo == 104) {
        preco = 1.3;
        printf("Código Produto: 104.\n");
        printf("Nome Produto: Cheeseburguer.\n");
        printf("Preço Produto: R$1,30.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else if(codigo == 105) {
        preco = 1;
        printf("Código Produto: 105.\n");
        printf("Nome Produto: Refrigerante.\n");
        printf("Preço Produto: R$1,00.\n");
        
        printf("Informe a quantidade comprada: ");
        scanf("%d", &quantidade);
    
        printf("O valor total a pagar é R$%g.\n", preco*quantidade);
        
    } else {
        printf("O produto informado não existe no Banco de Dados.\n");
        
    }
    
    return 0;
}
