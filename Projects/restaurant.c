/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void imprimirOpcoes();
void imprimirCardapio();

void preecherPedidoVazio(int pedido[][2]);

void salvarItem(int *opcao, int *quant, int pedido[][2]);
void atualizarItem(int *opcao, int *quant, int pedido[][2]);
void removerItem(int *opcao, int pedido[][2]);
void pesquisarItem(int *opcao, int pedido[][2]);

void listarPedido(int pedido[][2]);
void encerrarPedido(int pedido[][2]);

void encerrarPrograma();



int main()
{
    
    int opcao, tolerancia=0, qi=0;
    int pedido[10][2];
    int quant;
    
    preecherPedidoVazio(pedido);
    
    printf("\n    Bem-vindo ao Restaurante Yu's.    \n\n");
    
    while (1) {
        
        imprimirOpcoes();
        printf("\nQual opção deseja: ");
        scanf("%d", &opcao);
        printf("\n");
        
        if (opcao == 0) {
            
            encerrarPrograma();
            break;
            
        } else if (opcao == 1) {
            
            imprimirCardapio();
            
            printf("\nQual produto dejesa pedir: ");
            scanf("%d", &opcao);
            printf("\n");
            
            if (opcao > 0 && opcao < 11) {
                
                printf("Qual a quantidade: ");
                scanf("%d", &quant);
                printf("\n\n");
                
                salvarItem(&opcao, &quant, pedido);
                
                pesquisarItem(&opcao, pedido);
                
            } else {
                
                printf("O código informado não existe!\n\n");
                
            }
            
        } else if (opcao == 2) {
            
            printf("\nQual item dejesa atualizar: ");
            scanf("%d", &opcao);
            printf("\n");
            
            if (opcao > 0 && opcao < 11) {
                
                printf("Qual a quantidade: ");
                scanf("%d", &quant);
                printf("\n\n");
            
                atualizarItem(&opcao, &quant, pedido);
                
                pesquisarItem(&opcao, pedido);
                
            } else {
                
                printf("O código informado não existe!\n\n");
                
            }
            
        } else if (opcao == 3) {
            
            printf("\nQual item deseja remover: ");
            scanf("%d", &opcao);
            printf("\n");
            
            removerItem(&opcao, pedido);
            
            printf("Item removido com sucesso!");
            printf("\n\n");
            
        } else if (opcao == 4) {
            
            printf("\nQual item deseja pesquisar: ");
            scanf("%d", &opcao);
            printf("\n");
            
            printf("\n--------------- Pesquisa ---------------\n\n");
            pesquisarItem(&opcao, pedido);
            
        } else if (opcao == 5) {
            
            printf("\n------------ Lista de Pedido -----------\n\n");
            listarPedido(pedido);
            
        } else if (opcao == 6) {
            
            encerrarPedido(pedido);
            printf("----------------------------------------\n\n");
            printf("Deseja encerrar o pedido (0/1): ");
            scanf("%d", &opcao);
            printf("\n");
            
            if (opcao == 1) {
                
                printf("Pedido Encerrado!\n");
                encerrarPrograma();
                break;
                
            }
            
        } else {
            
            tolerancia++;
            
            if (tolerancia > 2) {
                
                printf("\nUse o software corretamente!\n");
                printf("\n----------------------------------------\n");
                break;
                
            }
            
            printf("A opção informada não existe!\n\n");
            
        }
        
    }


    return 0;
}



//------------------- Imprimir Cardápio -------------------//

void imprimirOpcoes() {
    
    printf("----------------- Menu -----------------\n\n");
    printf("[1]  Escolher   Item\n");
    printf("[2]  Atualizar  Item\n");
    printf("[3]  Remover    Item\n");
    printf("[4]  Pesquisar  Item\n");
    printf("[5]  Listar     Pedido\n");
    printf("[6]  Encerrar   Pedido\n");
    printf("[0]  Encerrar   Programa\n");
    
};


//------------------- Imprimir Cardápio -------------------//

void imprimirCardapio() {
    
    printf("\n--------------- Cardápio ---------------\n\n");
    printf("[001]  Pizza de Peperonny ----- R$ 50,00\n");
    printf("[002]  Guaraná ---------------- R$ 10,00\n");
    printf("[003]  Coco-cola -------------- R$  9,00\n");
    printf("[004]  Pizza Quatro-Queijo ---- R$ 55,00\n");
    printf("[005]  Pizza de Strogonoff ---- R$ 60,00\n");
    printf("[006]  Lasanha ---------------- R$ 40,00\n");
    printf("[007]  Musse de Maracujá ------ R$ 27,00\n");
    printf("[008]  Pudim ------------------ R$ 18,00\n");
    printf("[009]  Pizza Doce ------------- R$ 36,00\n");
    printf("[010]  Sorvete ---------------- R$  7,00\n");
    
};


//------------------- Preencher o Pedido -------------------//

void preecherPedidoVazio(int pedido[][2]) {
    
    for (int i=0; i < 10; i++) {
        
        pedido[i][0] = 0;
        pedido[i][1] = 0;
        
    }
    
};


//------------------- Salvar Item -------------------//

void salvarItem(int *opcao, int *quant, int pedido[][2]) {
    
    int casa;
    
    for (int i=0; i < 10; i++) {
        
        if (pedido[i][0] == 0) {
            
            casa = i;
            break;
            
        }
        
    }
    
    pedido[casa][0] = *opcao;
    pedido[casa][1] = *quant;
    
};


//------------------- Atualizar Item -------------------//

void atualizarItem(int *opcao, int *quant, int pedido[][2]) {
    
    
    for (int i=0; i < 10; i++) {
        
        if (pedido[i][0] == *opcao) {
            
            pedido[i][1] += *quant;
            
        }
        
    }
    
};


//------------------- Remover Item -------------------//

void removerItem(int *opcao, int pedido[][2]) {
    
    for (int i=0; i < 10; i++) {
        
        if (pedido[i][0] == *opcao) {
            
            pedido[i][0] = 0;
            pedido[i][1] = 0;
            break;
            
        }
        
    }
    
};


//------------------- Pesquisar Item -------------------//

void pesquisarItem(int *opcao, int pedido[][2]) {
    
    for (int i=0; i < 10; i++) {
        
        if (pedido[i][0] == *opcao) {
            
        if (pedido[i][0] == 1) {
            
            printf("[001]  Pizza de Peperonny ----- R$  50,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*50);
            
        } else if (pedido[i][0] == 2) {
            
            printf("[002]  Guaraná ---------------- R$  10,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*10);
            
        } else if (pedido[i][0] == 3) {
            
            printf("[003]  Coco-cola -------------- R$   9,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*9);
            
        } else if (pedido[i][0] == 4) {
            
            printf("[004]  Pizza Quatro-Queijo ---- R$  55,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*55);
            
        } else if (pedido[i][0] == 5) {
            
            printf("[005]  Pizza de Strogonoff ---- R$  60,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*60);
            
        } else if (pedido[i][0] == 6) {
            
            printf("[006]  Lasanha ---------------- R$  40,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*40);
            
        } else if (pedido[i][0] == 7) {
            
            printf("[007]  Musse de Maracujá ------ R$  27,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*27);
            
        } else if (pedido[i][0] == 8) {
            
            printf("[008]  Pudim ------------------ R$  18,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*18);
            
        } else if (pedido[i][0] == 9) {
            
            printf("[009]  Pizza Doce ------------- R$  36,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*36);
            
        } else if (pedido[i][0] == 10) {
            
            printf("[010]  Sorvete ---------------- R$   7,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*7);
            
        }
            
            break;
            
        }
        
    }
    
};


//------------------- Listar Pedido -------------------//

void listarPedido(int pedido[][2]) {
    
    for (int i=0; i < 10; i++) {
            
        if (pedido[i][0] == 1) {
            
            printf("[001]  Pizza de Peperonny ----- R$  50,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*50);
            
        } else if (pedido[i][0] == 2) {
            
            printf("[002]  Guaraná ---------------- R$  10,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*10);
            
        } else if (pedido[i][0] == 3) {
            
            printf("[003]  Coco-cola -------------- R$   9,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*9);
            
        } else if (pedido[i][0] == 4) {
            
            printf("[004]  Pizza Quatro-Queijo ---- R$  55,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*55);
            
        } else if (pedido[i][0] == 5) {
            
            printf("[005]  Pizza de Strogonoff ---- R$  60,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*60);
            
        } else if (pedido[i][0] == 6) {
            
            printf("[006]  Lasanha ---------------- R$  40,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*40);
            
        } else if (pedido[i][0] == 7) {
            
            printf("[007]  Musse de Maracujá ------ R$  27,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*27);
            
        } else if (pedido[i][0] == 8) {
            
            printf("[008]  Pudim ------------------ R$  18,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*18);
            
        } else if (pedido[i][0] == 9) {
            
            printf("[009]  Pizza Doce ------------- R$  36,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*36);
            
        } else if (pedido[i][0] == 10) {
            
            printf("[010]  Sorvete ---------------- R$   7,00\n");
            printf("[%3d]  Quantidade: %2d --------- R$ %3d,00\n\n", i, pedido[i][1], pedido[i][1]*7);
            
        }
        
    }
    
    printf("\n");
    
};


//------------------- Encerrar Pedido -------------------//

void encerrarPedido(int pedido[][2]) {
    
    int sum=0;
    
    printf("\n---------------- Pedido ----------------\n\n");
    
    listarPedido(pedido);
    
    for (int i=0; i < 10; i++) {
        
        if (pedido[i][0] == 1) {
            
            sum += pedido[i][1] * 50;
            
        } else if (pedido[i][0] == 2) {
            
            sum += pedido[i][1] * 10;
            
        } else if (pedido[i][0] == 3) {
            
            sum += pedido[i][1] * 9;
            
        } else if (pedido[i][0] == 4) {
            
            sum += pedido[i][1] * 55;
            
        } else if (pedido[i][0] == 5) {
            
            sum += pedido[i][1] * 60;
            
        } else if (pedido[i][0] == 6) {
            
            sum += pedido[i][1] * 40;
            
        } else if (pedido[i][0] == 7) {
            
            sum += pedido[i][1] * 27;
            
        } else if (pedido[i][0] == 8) {
            
            sum += pedido[i][1] * 18;
            
        } else if (pedido[i][0] == 9) {
            
            sum += pedido[i][1] * 36;
            
        } else if (pedido[i][0] == 10) {
            
            sum += pedido[i][1] * 7;
            
        }
        
    }
    
    printf("Valor Total ------------------- R$ %3d,00\n\n", sum);
    
};


//------------------- Encerrar Programa -------------------//

void encerrarPrograma() {
    
    printf("\nPrograma Encerrado.\n");
    printf("\n----------------------------------------\n");
    
};
