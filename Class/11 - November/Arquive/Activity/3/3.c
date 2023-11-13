int number();

int number()
{
    FILE *arquivo;
    char caractere;
    int number = 0;
    
    char filePath[200];
    strcpy(filePath, repository);
    strcat(filePath, "3\\numeros.txt");
    arquivo = fopen(filePath, "w");

    if (!arquivo)
    {
        enderecoArquivoIncorreto();
        return 1;
    }

    while ((caractere = fgets(arquivo)) != EOF)
    {
        if (number == 0)
            number = (int) caractere;

        if (number < (int) caractere)
            number = (int) caractere;
    }

    fclose(arquivo);

    read(filePath);
    
    return 0;
}