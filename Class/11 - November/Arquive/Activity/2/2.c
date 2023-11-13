int white();

int white()
{
    FILE *arquivo;
    char frase[30];

    printf(" </> Informe uma frase: ");
    scanf(" %99[^\n]", frase); scanf("%*[^\n]"); scanf("%*c"); printf("\n");

    char filePath[200];
    strcpy(filePath, repository);
    strcat(filePath, "2\\frase.txt");
    arquivo = fopen(filePath, "w");

    if (!arquivo)
    {
        enderecoArquivoIncorreto();
        return 1;
    }

    fputs(frase, arquivo);

    fclose(arquivo);

    read(filePath);
    
    return 0;
}