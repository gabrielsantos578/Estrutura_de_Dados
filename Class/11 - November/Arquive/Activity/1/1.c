int read(char enderecoArquivo[]);

int read(char enderecoArquivo[])
{
    FILE *arquivo;
    char caractere;

    arquivo = fopen(enderecoArquivo, "r"); // Verifica se o arquivo foi aberto com sucesso

    if (!arquivo)
    {
        enderecoArquivoIncorreto();
        return -1;
    }

    printf(" </> Conteudo do arquivo: ");
    while ((caractere = fgetc(arquivo)) != EOF)
    {
        printf("%c", caractere);
    } printf("\n\n\n");

    fclose(arquivo);

    return 0;
}