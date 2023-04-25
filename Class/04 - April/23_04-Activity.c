#include <stdio.h>
#include <string.h>

struct Agenda {
    
    int codigo;
    char nome[100];
    char telefone[15];
    
}; typedef struct Agenda agenda;


int menu(int *opcao);
int cadastrar(agenda A[100], int *insercao);
int listar(agenda A[100], int *insercao);
int ordenar(agenda A[100], int *insercao);
int consultar(agenda A[100], int *insercao);
int sair();


int main()
{
    
    agenda Agenda[100];
    int insercao=0, opcao; 
    
    while(1) {
        
        menu(&opcao);
        
        if (opcao == 1) {
            
            cadastrar(Agenda, &insercao);
            
        } else if (opcao == 2) {
            
            listar(Agenda, &insercao);
            
        } else if (opcao == 3) {
            
            ordenar(Agenda, &insercao);
            
        } else if (opcao == 4) {
            
            consultar(Agenda, &insercao);
            
        } else if (opcao == 0) {
            
            sair();
            break;
            
        } else {
            
            printf("\n\nA opção informada não existe!\n\n");
            
        }
        
    }
    
    return 0;
    
}


//------------------- Menu -------------------//

int menu(int *opcao) {
    
    printf("\n\n------------ Bem-vindo a Agenda ------------\n\n");
    printf("[1] Cadastrar\n");
    printf("[2] Listar\n");
    printf("[3] Ordenar\n");
    printf("[4] Consultar\n");
    printf("[0] Encerrar\n\n");
    printf("Digite o número da opção: ");
    scanf("%d", opcao);
    printf("\n");
    
    return 0;
    
};


//------------------- Cadastrar -------------------//

int cadastrar(agenda A[100], int *insercao) {
    
    printf("\n------------ Formulário de Cadastro ------------\n\n");
    
    A[*insercao].codigo = (*insercao + 1);
    printf("Código..: %d\n", A[*insercao].codigo);
    printf("Nome....: "); scanf(" %99[^\n]", A[*insercao].nome); scanf("%*[^\n]"); scanf("%*c");
    printf("Telefone: (coloque o dd e os pontos) "); scanf(" %14[^\n]", A[*insercao].telefone); scanf("%*[^\n]"); scanf("%*c");
    
    printf("\nInserção do contato %s bem sucedida!\n\n\n", A[*insercao].nome);
    
    *insercao+=1;
    
    return 0;
    
};


//------------------- Listar -------------------//

int listar(agenda A[100], int *insercao) {
    
    printf("\n------------ Lista de Contatos ------------\n\n");
    
    for (int i = 0; i < *insercao; i++) {
        
        printf("Código..: %d\n", A[i].codigo);
        printf("Nome....: %s\n", A[i].nome);
        printf("Telefone: %s\n\n", A[i].telefone);
        
    } printf("\n");
    
};


//------------------- Ordenar -------------------//

int ordenar(agenda A[100], int *insercao) {
    
    printf("\n------------ Formulário de Ordenação ------------\n\n");
    int op;
    
    printf("[1] Código\n");
    printf("[2] Nome\n");
    printf("[3] Telefone\n\n");
    printf("Digite o número da opção: ");
    scanf("%d", &op);
    printf("\n");
    
    if (op == 1) {
        
        
        for (int i = 0; i < (*insercao - 1); i++) {
            
            if (A[i].codigo > A[(i+1)].codigo) {
                
                agenda Aux;
                
                Aux = A[i];
                A[i] = A[i+1];
                A[i+1] = Aux;
                
                i = -1;
                
            }
            
        }
        
        
    } else if (op == 2) {
        
        for (int i = 0; i < (*insercao - 1); i++) {
            
            int comp = strcmp(A[i].nome, A[(i+1)].nome);
            
            if (comp > 0) {
                
                agenda Aux;
                
                Aux = A[i];
                A[i] = A[i+1];
                A[i+1] = Aux;
                
                i = -1;
                
            }
            
        }
        
    } else if (op == 3) {
        
        for (int i = 0; i < (*insercao - 1); i++) {
            
            int comp = strcmp(A[i].telefone, A[(i+1)].telefone);
            
            if (comp > 0) {
                
                agenda Aux;
                
                Aux = A[i];
                A[i] = A[i+1];
                A[i+1] = Aux;
                
                i = -1;
                
            }
            
        }
        
    }
    
    int enc=0;
    
    for (int i = 0; i < *insercao; i++) {
        
        printf("Código..: %d\n", A[i].codigo);
        printf("Nome....: %s\n", A[i].nome);
        printf("Telefone: %s\n\n", A[i].telefone);
        
    } printf("Ordenação concluída!\n\n\n");
    
    
    
    return 0;
    
};


//------------------- Consultar -------------------//

int consultar(agenda A[100], int *insercao) {
    
    printf("\n------------ Formulário de Consulta ------------\n\n");
    char nome[100];
    
    printf("Informe o nome do contato: "); scanf(" %99[^\n]", nome); scanf("%*[^\n]"); scanf("%*c");
    printf("\n");
    
    int enc=0;
    
    for (int i = 0; i < *insercao; i++) {
        
        int comp = strcmp(nome, A[i].nome);
        
        if (comp == 0) {
            
            printf("Código..: %d\n", A[i].codigo);
            printf("Nome....: %s\n", A[i].nome);
            printf("Telefone: %s\n\n", A[i].telefone);
            
            enc = 1;
            break;
            
        }
        
    }
    
    if (enc == 0) {
        printf("Contato não encontrado!\n\n\n");
    }
    
    return 0;
    
};


//------------------- Sair -------------------//

int sair() {
    
    printf("\nPrograma Encerrado.\n");
    printf("\n----------------------------------------\n");
    
    return 0;
    
};