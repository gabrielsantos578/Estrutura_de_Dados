void menu(short *opcao);
void opcaoInexistente();
void enderecoArquivoIncorreto();
void encerrarPrograma();

void menu(short *opcao)
{

    while (1)
    {

        printf("\n-------------  MENU  -------------\n\n");
        printf("    [1] Atividade 1\n");
        printf("    [2] Atividade 2\n");
        printf("    [3] Atividade 3\n");
        printf("    [4] Atividade 4\n");
        printf("    [5] Atividade 5\n");
        printf("    [0] Encerrar\n\n");
        printf("----------------------------------\n\n");

        printf(" </> Informe o numero da opcao: ");
        scanf("%hd", opcao);
        printf("\n");

        if (*opcao >= 0 && *opcao < 6)
            break;

        opcaoInexistente();
    }

    return;
};

void opcaoInexistente()
{

    printf(" </> A opcao informada nao existe!\n\n\n");

    return;
};

void enderecoArquivoIncorreto()
{

    printf(" </> Endereco de arquivo incorreto!\n\n\n");

    return;
};

void encerrarPrograma()
{

    printf(" </> Agradecemos por utilizar nosso software.\n\n");

    return;
};