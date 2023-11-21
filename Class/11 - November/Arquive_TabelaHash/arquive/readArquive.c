int readArquive(Element *vector[]);

int readArquive(Element *vector[])
{
    FILE *arquivo;
    char string[100];

    char filePath[200];
    strcpy(filePath, repository);
    strcat(filePath, "arquive\\arquive.txt");
    arquivo = fopen(filePath, "r");

    if (!arquivo)
    {
        enderecoArquivoIncorreto();
        return 1;
    }

    while (fscanf(arquivo, "%s", string) != EOF)
    {
       Element *newElement = allocElement();

        strcpy(newElement->valorElemento, string);
        int hashElement = hash(string);
        newElement->chaveElemento = key(string);

        //printf(" (key) %d\n\n", newElement->chaveElemento);

        insertElementHash(vector, newElement, hashElement);
    }

    fclose(arquivo);

    return 0;
}