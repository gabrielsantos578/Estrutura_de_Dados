/******************************************************************************

                       Project Marketplace of Restaurants

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>


struct Dados_Restaurante {
    
    int idRestaurante;
    char emailRestaurante[100];
    char senhaRestaurante[100];
    char nomeRestaurante[100];
    char cnpjRestaurante[19];
    char telefoneRestaurante[20];
    char rua[50];
    char bairro[50];
    char numero[6];
    
};

typedef struct Dados_Restaurante dadosR;

struct Dados_Usuario {
    
    int idUsuario;
    char nomeUsuario[100];
    char emailUsuario[100];
    char senhaUsuario[100];
    char cpfCliente[15];
    char rua[50];
    char bairro[50];
    char numero[6];
    
};

typedef struct Dados_Usuario dadosU;

struct Dados_Produto {
    
    int idProduto;
    int idRestaurante;
    char nomeProduto[100];
    float precoProduto;
    int quantidadeEstoque;
    
};

typedef struct Dados_Produto dadosP;

struct Dados_Pedido {
    
    int idPedido;
    int idUsuario;
    char nomeUsuario[100];
    char rua[50];
    char bairro[50];
    char numero[6];
    
};

struct Dados_Item {
    
    int idItem;
    int idPedido;
    int idProduto;
    char nomeProduto[100];
    float precoProduto;
    int quantidadeItem;
    int valorItem;
    
};

typedef struct Dados_Produto dadosI;



int imprimirOpcoes(int *opcao);
int criarConta(dadosU tabelaCliente[], dadosR tabelaRestaurante[], int *iU, int *iR, int *opcao, int *idUsuario, int *idRestaurante);
int validadeCPF(dadosU tabelaUuario[], int *i);
int validadeCNPJ(dadosR tabelaRestaurante[], int *i);
int logarContaUsuario(char email[], char senha[], dadosU tabelaUsuario[], int *idUsuario, int *iU);
int logarContaEmpresarial(char email[], char senha[], dadosR tabelaRestaurante[], int *idRestaurante, int *iR);
int logarConta(dadosU tabelaCliente[], dadosR tabelaRestaurante[], int *iU, int *iR, int *opcao, int *idUsuario, int *idRestaurante);


int main()
{
    
    int opcao;
    int idUsuario=0, idRestaurante=0;
    int iU=0, iR=0;
    dadosU tabelaCliente[100];
    dadosR tabelaRestaurante[100];
    
    while (1) {
        
        imprimirOpcoes(&opcao);
        
        if (opcao == 1) {
            
            logarConta(tabelaCliente, tabelaRestaurante, &iU, &iR, &opcao, &idUsuario, &idRestaurante);
            
            if (idUsuario != 0) {
                
                
                
            } else if (idRestaurante != 0) {
                
                
                
            }
            
        } else if (opcao == 2) {
            
            criarConta(tabelaCliente, tabelaRestaurante, &iU, &iR, &opcao, &idUsuario, &idRestaurante);
            
            if (idUsuario != 0) {
                
                
                
            } else if (idRestaurante != 0) {
                
                
                
            }
            
        } else if (opcao == 3) {
            
            
            
        } else if (opcao == 0) {
            
            
            
        } else {
            
            
            
        }
        
    }

    return 0;
    
}



int imprimirOpcoes(int *opcao) {
    
    printf("\n\n------------ Bem-vindo ao nosso Marketplace ------------\n\n");
    printf("[1] Logar em sua conta\n");
    printf("[2] Criar uma conta\n");
    printf("[3] Continuar sem logar\n");
    printf("[0] Encerrar programa\n\n");
    printf("Digite o número da opção: ");
    scanf("%d", opcao);
    printf("\n");
    
    return 0;
    
};


int validadeCPF(dadosU tabelaCliente[], int *i) {
    
    int multiplicador1[9] = {10,9,8,7,6,5,4,3,2}, multiplicador2[10] = {11,10,9,8,7,6,5,4,3,2}, matrizVerif[3] = {3,3,3};
    char cpf[12];
	int soma=0, resto, limpo=0, verif=0, iVerif=0;
	char digito[2];
	
	for (int s = 0; s < 14; s++) {
	    
	    if (tabelaCliente[*i].cpfCliente[s] == '0' || tabelaCliente[*i].cpfCliente[s] == '1' || tabelaCliente[*i].cpfCliente[s] == '2' ||
	    tabelaCliente[*i].cpfCliente[s] == '3' || tabelaCliente[*i].cpfCliente[s] == '4' || tabelaCliente[*i].cpfCliente[s] == '5' ||
	    tabelaCliente[*i].cpfCliente[s] == '6' || tabelaCliente[*i].cpfCliente[s] == '7' || tabelaCliente[*i].cpfCliente[s] == '8' ||
	    tabelaCliente[*i].cpfCliente[s] == '9') {
	        
	        int aux = tabelaCliente[*i].cpfCliente[s];
	        aux -= 48;
	        if (aux != 0){
	            cpf[s - limpo] = aux + '0';
	        } else {
	            cpf[s - limpo] = '0';
	        }
	        verif++;
	        
	        /*printf("%c\n", tabelaCliente[*i].cpfCliente[s]);
	        printf("%d\n", aux);
	        printf("%c\n\n", cpf[s - limpo]);*/
	        
	    } else if (tabelaCliente[*i].cpfCliente[s] == '.' || tabelaCliente[*i].cpfCliente[s] == '-') {
	        
	        if (verif == matrizVerif[iVerif]) {
	            verif = 0;
	            iVerif++;
	            limpo++;
	        } else {
	            return -4;
	        }
	        
	    } else if (tabelaCliente[*i].cpfCliente[s] == '\0' && s < 14) {
	        
	        if (s == 0) {
	            return -5;
	        }
	        
	        return -3;
	        
	    } else {
	        
	        return -1;
	        
	    }
	    
	}
	
	/*printf("%s\n", cnpj);*/
	
	if (strlen(cpf) != 11) {
	    
	    return -3;
	    
	}
	
	int auxi = cpf[0] - 48, rep=0;
	for(int s=0; s < 9; s++) {
	    
	    if((cpf[s] - '0') == auxi) {
	        rep++;
	    }
	    
	}
	    
	if (rep == 9){
	    return -2;
	}
	
	/*int c = strlen(cnpj);
	printf("%d\n", c);*/
	
	for(int s=0; s < 9; s++) {
	    
	    int aux = cpf[s] - 48;
	    soma += (aux * multiplicador1[s]);
	    /*printf("%c\n", cpf[s]);
	    printf("%d\n", multiplicador1[s]);
	    printf("%d\n", aux * multiplicador1[s]);
	    printf("%d\n\n", soma);*/
	    
	}
	
	resto = (soma % 11);
	//printf("%d\n", soma % 11);
	
	if ( resto < 2) {
	    
	    resto = 0;
	    digito[0] = '0';
	        
	} else {
	        
	    resto = 11 - resto;
	    digito[0] = resto + '0';
	        
	}
	
	/*printf("%d\n", resto);
	printf("%c\n\n", cpf[9]);
	printf("%c\n\n", digito[0]);*/
	
	soma = 0;
	
	for (int s = 0; s < 10; s++) {
	
        int aux = cpf[s] - 48;
	    soma += (aux * multiplicador2[s]);
	    /*printf("%c\n", cpf[s]);
	    printf("%d\n", multiplicador2[s]);
	    printf("%d\n", aux * multiplicador2[s]);
	    printf("%d\n\n", soma);*/
	
	}
		
	resto = (soma % 11);
	//printf("%d\n", soma % 11);
	
	if ( resto < 2) {
	    
	    resto = 0;
	    digito[1] = '0';
	        
	} else {
	        
	    resto = 11 - resto;
	    digito[1] = resto + '0';
	        
	}
	
	/*printf("%d\n", resto);
	printf("%c\n\n", cpf[10]);
	printf("%c\n\n", digito[1]);*/
	
	if (cpf[9] == digito[0] && cpf[10] == digito[1]) {
		    
		return 1;
	    
	} else {
	    
	    return 0;
	    
	}
    
};


int validadeCNPJ(dadosR tabelaRestaurante[], int *i) {
    
    int multiplicador1[12] = {5,4,3,2,9,8,7,6,5,4,3,2}, multiplicador2[13] = {6,5,4,3,2,9,8,7,6,5,4,3,2}, matrizVerif[4] = {2,3,3,4};
    char cnpj[15];
	int soma=0, resto, limpo=0, verif=0, iVerif=0;
	char digito[2];
	
	//printf("%s", tabelaRestaurante[*i].cnpjRestaurante);
	
	for (int s = 0; s < 18; s++) {
	    
	    if (tabelaRestaurante[*i].cnpjRestaurante[s] == '0' || tabelaRestaurante[*i].cnpjRestaurante[s] == '1' || tabelaRestaurante[*i].cnpjRestaurante[s] == '2' ||
	    tabelaRestaurante[*i].cnpjRestaurante[s] == '3' || tabelaRestaurante[*i].cnpjRestaurante[s] == '4' || tabelaRestaurante[*i].cnpjRestaurante[s] == '5' ||
	    tabelaRestaurante[*i].cnpjRestaurante[s] == '6' || tabelaRestaurante[*i].cnpjRestaurante[s] == '7' || tabelaRestaurante[*i].cnpjRestaurante[s] == '8' ||
	    tabelaRestaurante[*i].cnpjRestaurante[s] == '9') {
	        
	        int aux = tabelaRestaurante[*i].cnpjRestaurante[s];
	        aux -= 48;
	        if (aux != 0){
	            cnpj[s - limpo] = aux + '0';
	        } else {
	            cnpj[s - limpo] = '0';
	        }
	        verif++;
	        
	        /*printf("%c\n", tabelaRestaurante[*i].cnpjRestaurante[s]);
	        printf("%d\n", aux);
	        printf("%c\n\n", cnpj[s - limpo]);*/
	        
	    } else if (tabelaRestaurante[*i].cnpjRestaurante[s] == '.' || tabelaRestaurante[*i].cnpjRestaurante[s] == '-' || tabelaRestaurante[*i].cnpjRestaurante[s] == '/') {
	        
	        if (verif == matrizVerif[iVerif]) {
	            verif = 0;
	            iVerif++;
	            limpo++;
	        } else {
	            return -4;
	        }
	        
	    } else if (tabelaRestaurante[*i].cnpjRestaurante[s] == '\0' && s < 18) {
	        
	        return -3;
	        
	    } else {
	        
	        return -1;
	        
	    }
	    
	}
	
	/*printf("%s\n", cnpj);*/
	
	if (strlen(cnpj) != 14) {
	    
	    return -3;
	    
	}
	
	int auxi = cnpj[0] - 48, rep=0;
	for(int s=0; s < 8; s++) {
	    
	    if((cnpj[s] - '0') == auxi) {
	        rep++;
	    }
	    
	}
	    
	if (rep == 8){
	    return -2;
	}
	
	/*int c = strlen(cnpj);
	printf("%d\n", c);*/
	
	for(int s=0; s < 12; s++) {
	    
	    int aux = cnpj[s] - 48;
	    soma += (aux * multiplicador1[s]);
	    /*printf("%c\n", cnpj[s]);
	    printf("%d\n", multiplicador1[s]);
	    printf("%d\n", aux * multiplicador1[s]);
	    printf("%d\n\n", soma);*/
	    
	}
	
	resto = (soma % 11);
	//printf("%d\n", soma % 11);
	
	if ( resto < 2) {
	    
	    resto = 0;
	    digito[0] = '0';
	        
	} else {
	        
	    resto = 11 - resto;
	    digito[0] = resto + '0';
	        
	}
	
	/*printf("%d\n", resto);
	printf("%c\n\n", cnpj[12]);
	printf("%c\n\n", digito[0]);*/
	
	soma = 0;
	
	for (int s = 0; s < 13; s++) {
	
        int aux = cnpj[s] - 48;
	    soma += (aux * multiplicador2[s]);
	    /*printf("%c\n", cnpj[s]);
	    printf("%d\n", multiplicador2[s]);
	    printf("%d\n", aux * multiplicador2[s]);
	    printf("%d\n\n", soma);*/
	
	}
		
	resto = (soma % 11);
	//printf("%d\n", soma % 11);
	
	if ( resto < 2) {
	    
	    resto = 0;
	    digito[1] = '0';
	        
	} else {
	        
	    resto = 11 - resto;
	    digito[1] = resto + '0';
	        
	}
	
	/*printf("%d\n", resto);
	printf("%c\n\n", cnpj[13]);
	printf("%c\n\n", digito[1]);*/
	
	if (cnpj[12] == digito[0] && cnpj[13] == digito[1]) {
		    
		return 1;
	    
	} else {
	    
	    return 0;
	    
	}
    
};


int criarConta(dadosU tabelaCliente[], dadosR tabelaRestaurante[], int *iU, int *iR, int *opcao, int *idUsuario, int *idRestaurante) {
    
    int tCriarConta=0;
    
    while (1) {
        
        printf("\n---------------- Formulário de Cadastro ----------------\n\n");
        printf("Qual tipo de conta deseja criar: \n");
        printf("[1] Criar uma conta pessoal\n");
        printf("[2] Criar uma conta para meu restaurante\n");
        printf("[0] Voltar\n\n");
        printf("Digite o número da opção: ");
        scanf("%d", opcao);
        printf("\n");
        
        if (*opcao == 1) {
            
            printf("\n-------------------- Conta Pessoal ---------------------\n\n");
            printf("Deseja realmente criar uma conta pessoal: \n");
            printf("[1] Continuar\n");
            printf("[0] Voltar\n\n");
            printf("Digite o número da opção: ");
            scanf("%d", opcao);
            printf("\n");
            
            if (*opcao == 1) {
                
                int tSalvar=0;
                
                while (1) {
                    
                    if (*opcao == 1 || *opcao == 2) {
                        
                        tabelaCliente[*iU].idUsuario = (*iU + 1);
                        printf("Código..: %d\n", tabelaCliente[*iU].idUsuario);
                        printf("Nome....: "); scanf(" %99[^\n]", tabelaCliente[*iU].nomeUsuario); scanf("%*[^\n]"); scanf("%*c");
                        printf("Email...: "); scanf(" %99[^\n]", tabelaCliente[*iU].emailUsuario); scanf("%*[^\n]"); scanf("%*c");
                        printf("Senha...: "); scanf(" %99[^\n]", tabelaCliente[*iU].senhaUsuario); scanf("%*[^\n]"); scanf("%*c");
                        int aux = 0;
                        while (aux != 1) {
                            printf("CPF.....: "); scanf(" %14[^\n]", tabelaCliente[*iR].cpfCliente); scanf("%*[^\n]"); scanf("%*c");
                            aux = validadeCPF(tabelaCliente, iR);
                            
                            if (aux == -4) {
                                printf("CPF incorreto!\n");
                            } else if (aux == -3) {
                                printf("CPF está imcompleto!\n");
                            } else if (aux == -2) {
                                printf("Os digítos não podem ser iguais!\n");
                            } else if (aux == -1) {
                                printf("CPF deve ser sem letras!\n");
                            } else if (aux == 0) {
                                printf("CPF inválido!\n");
                            }
                        }
                        printf("Endereço: "); scanf(" %49[^\n]", tabelaCliente[*iU].rua); scanf("%*[^\n]"); scanf("%*c");
                        printf("Bairro..: "); scanf(" %49[^\n]", tabelaCliente[*iU].bairro); scanf("%*[^\n]"); scanf("%*c");
                        printf("Número..: "); scanf(" %5[^\n]", tabelaCliente[*iU].numero); scanf("%*[^\n]"); scanf("%*c");
                        printf("\n");
                        
                    }
                    
                    printf("Deseja salvar os dados informados: \n");
                    printf("[1] Salvar\n");
                    printf("[2] Refazer\n");
                    printf("[0] Não salvar\n\n");
                    printf("Digite o número da opção: ");
                    scanf("%d", opcao);
                    printf("\n");
                    
                    if (*opcao == 1) {
                        
                        printf("Conta criada com sucesso!\n\n");
                        *idUsuario = tabelaCliente[*iU].idUsuario;
                        *iU+=1;
                        *opcao = 1;
                        break;
                        
                    } else if (*opcao == 2) {
                        
                    } else if (*opcao == 0) {
                        
                        dadosU auxiliar;
                        tabelaCliente[*iU] = auxiliar;
                        *opcao = 1;
                        break;
                        
                    } else {
                        
                        tSalvar++;
                        
                        if (tSalvar > 2) {
                            printf("Use o software corretamente!\n");
                            break;
                        }
                        
                        printf("A opção não existe!\n\n");
                        
                    }
                    
                }
                
            }
            
        } else if (*opcao == 2) {
            
            printf("\n------------------ Conta Empresarial -------------------\n\n");
            printf("Deseja realmente criar uma conta empresarial: \n");
            printf("[1] Continuar\n");
            printf("[0] Voltar\n\n");
            printf("Digite o número da opção: ");
            scanf("%d", opcao);
            printf("\n");
            
            if (*opcao == 1) {
                
                int tSalvar=0;
                
                while (1) {
                    
                    if (*opcao == 1 || *opcao == 2) {
                        
                        tabelaRestaurante[*iR].idRestaurante = (*iR + 1);
                        printf("Código..: %d\n", tabelaRestaurante[*iR].idRestaurante);
                        printf("Email...: "); scanf(" %99[^\n]", tabelaRestaurante[*iR].emailRestaurante); scanf("%*[^\n]"); scanf("%*c");
                        printf("Senha...: "); scanf(" %99[^\n]", tabelaRestaurante[*iR].senhaRestaurante); scanf("%*[^\n]"); scanf("%*c");
                        printf("Nome....: "); scanf(" %99[^\n]", tabelaRestaurante[*iR].nomeRestaurante); scanf("%*[^\n]"); scanf("%*c");
                        int aux = 0;
                        while (aux != 1) {
                            printf("CNPJ....: "); scanf(" %18[^\n]", tabelaRestaurante[*iR].cnpjRestaurante); scanf("%*[^\n]"); scanf("%*c");
                            aux = validadeCNPJ(tabelaRestaurante, iR);
                            
                            if (aux == -4) {
                                printf("CNPJ incorreto!\n");
                            } else if (aux == -3) {
                                printf("CNPJ está imcompleto!\n");
                            } else if (aux == -2) {
                                printf("Os digítos não podem ser iguais!\n");
                            } else if (aux == -1) {
                                printf("CNPJ deve ser sem letras!\n");
                            } else if (aux == 0) {
                                printf("CNPJ inválido!\n");
                            }
                        }
                        printf("Telefone: "); scanf(" %18[^\n]", tabelaRestaurante[*iR].telefoneRestaurante); scanf("%*[^\n]"); scanf("%*c");
                        printf("Endereço: "); scanf(" %49[^\n]", tabelaRestaurante[*iR].rua); scanf("%*[^\n]"); scanf("%*c");
                        printf("Bairro..: "); scanf(" %49[^\n]", tabelaRestaurante[*iR].bairro); scanf("%*[^\n]"); scanf("%*c");
                        printf("Número..: "); scanf(" %5[^\n]", tabelaRestaurante[*iR].numero); scanf("%*[^\n]"); scanf("%*c");
                        printf("\n");
                        
                    }
                    
                    printf("Deseja salvar os dados informados: \n");
                    printf("[1] Salvar\n");
                    printf("[2] Refazer\n");
                    printf("[0] Não salvar\n\n");
                    printf("Digite o número da opção: ");
                    scanf("%d", opcao);
                    printf("\n");
                    
                    if (*opcao == 1) {
                        
                        printf("Conta criada com sucesso!\n\n");
                        *idRestaurante = tabelaRestaurante[*iR].idRestaurante;
                        *iR+=1;
                        *opcao = 1;
                        break;
                        
                    } else if (*opcao == 2) {
                        
                    } else if (*opcao == 0) {
                        
                        dadosR auxiliar;
                        tabelaRestaurante[*iR] = auxiliar;
                        *opcao = 1;
                        break;
                        
                    } else {
                        
                        tSalvar++;
                        
                        if (tSalvar > 2) {
                            printf("Use o software corretamente!\n");
                            break;
                        }
                        
                        printf("A opção não existe!\n\n");
                        
                    }
                    
                }
                
            }
            
        } else if (*opcao == 0) {
            
            break;
            
        } else {
            
            tCriarConta++;
            
            if (tCriarConta > 2) {
                printf("Use o software corretamente!\n");
                break;
            }
            
            printf("A opção não existe!\n");
            
        }
        
        if (*idUsuario != 0 || *idRestaurante != 0) {
            break;
        }
        
    }
    
    return 0;
    
};


int logarContaUsuario(char email[], char senha[], dadosU tabelaUsuario[], int *idUsuario, int *iU) {
    
    int status = 0;
    //printf("%d\n\n", *iU);
    
    for (int i = 0; i < *iU; i++) {
        
        /*printf("%s\n", email);
        printf("%s\n\n", senha);
        printf("%s\n", tabelaUsuario[i].emailUsuario);
        printf("%s\n\n", tabelaUsuario[i].senhaUsuario);
        printf("%d\n", strcmp(tabelaUsuario[i].emailUsuario, email));
        printf("%d\n\n\n\n", strcmp(tabelaUsuario[i].senhaUsuario, senha));*/
        
        if (strcmp(tabelaUsuario[i].emailUsuario, email) == 0) {
            
            if (strcmp(tabelaUsuario[i].senhaUsuario, senha) == 0) {
                
                status = 1;
                *idUsuario = tabelaUsuario[i].idUsuario;
                
            }
            
        }
        
    }
    
    //printf("%d", status);
    return status;
    
};


int logarContaEmpresarial(char email[], char senha[], dadosR tabelaRestaurante[], int *idRestaurante, int *iR){
    
    int status = 0;
    
    for (int i = 0; i < *iR; i++) {
        
        if (strcmp(tabelaRestaurante[i].emailRestaurante, email) == 0) {
            
            if (strcmp(tabelaRestaurante[i].senhaRestaurante, senha) == 0) {
                
                status = 1;
                *idRestaurante = tabelaRestaurante[i].idRestaurante;
                
            }
            
        }
        
    }
    
    //printf("%d", status);
    return status;
    
};


int logarConta(dadosU tabelaCliente[], dadosR tabelaRestaurante[], int *iU, int *iR, int *opcao, int *idUsuario, int *idRestaurante) {
    
    int tLogarConta=0;
    
    while (1) {
        
        printf("\n----------------- Formulário de Login ------------------\n\n");
        printf("Qual tipo de conta deseja logar: \n");
        printf("[1] Logar em sua conta pessoal\n");
        printf("[2] Logar em sua conta empresarial\n");
        printf("[0] Voltar\n\n");
        printf("Digite o número da opção: ");
        scanf("%d", opcao);
        printf("\n");
        
        if (*opcao == 1) {
            
            printf("\n-------------------- Conta Pessoal ---------------------\n\n");
            printf("Deseja realmente logar em sua conta pessoal: \n");
            printf("[1] Continuar\n");
            printf("[0] Voltar\n\n");
            printf("Digite o número da opção: ");
            scanf("%d", opcao);
            printf("\n");
            
            if (*opcao == 1) {
                    
                char email[100], senha[100];
                int login=0;
                    
                while (login != 1) {
                    
                    printf("OBS: Caso queira sair, digite 0.\n");
                    printf("Email...: "); scanf(" %99[^\n]", email); scanf("%*[^\n]"); scanf("%*c");
                    if (email[0] == '0') {
                        break;
                    }
                    printf("Senha...: "); scanf(" %99[^\n]", senha); scanf("%*[^\n]"); scanf("%*c");
                    printf("\n");
                    
                    login = logarContaUsuario(email, senha, tabelaCliente, idUsuario, iU);
                    
                    if(login == 0) {
                        //printf("%d\n", login);
                        printf("E-mail e/ou Senha estão incorreto(s)!\n\n");
                    } else {
                        //printf("%d\n", login);
                        printf("Login bem sucedido.\n\n");
                        break;
                    }
                        
                }
                        
            }
                
        } else if (*opcao == 2) {
            
            printf("\n------------------ Conta Empresarial -------------------\n\n");
            printf("Deseja realmente logar em sua conta empresarial: \n");
            printf("[1] Continuar\n");
            printf("[0] Voltar\n\n");
            printf("Digite o número da opção: ");
            scanf("%d", opcao);
            printf("\n");
            
            if (*opcao == 1) {
                    
                char email[100], senha[100];
                int login=0;
                    
                while (login != 1) {
                    
                    printf("OBS: Caso queira sair, digite 0.\n");
                    printf("Email...: "); scanf(" %99[^\n]", email); scanf("%*[^\n]"); scanf("%*c");
                    if (email[0] == '0') {
                        break;
                    }
                    printf("Senha...: "); scanf(" %99[^\n]", senha); scanf("%*[^\n]"); scanf("%*c");
                    printf("\n");
                    
                    login = logarContaEmpresarial(email, senha, tabelaRestaurante, idRestaurante, iR);
                    
                    if(login == 0) {
                        //printf("%d\n", login);
                        printf("E-mail e/ou Senha estão incorreto(s)!\n\n");
                    } else {
                        //printf("%d\n", login);
                        printf("Login bem sucedido.\n\n");
                        break;
                    }
                        
                }
                        
            }
            
        } else if (*opcao == 0) {
            
            break;
            
        } else {
            
            tLogarConta++;
            
            if (tLogarConta > 2) {
                printf("Use o software corretamente!\n");
                break;
            }
            
            printf("A opção não existe!\n");
            
        }

        //2printf("id: %d\n", *idUsuario);
        
        if (*idUsuario != 0 || *idRestaurante != 0) {
            break;
        }
        
    }
    
    return 0;
    
};