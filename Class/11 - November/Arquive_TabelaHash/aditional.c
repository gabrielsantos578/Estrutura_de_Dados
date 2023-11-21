void enderecoArquivoIncorreto();
Element* allocElement();
bool verifyVoidVector(Element* vector[]);

void enderecoArquivoIncorreto()
{
    printf(" </> Endereco de arquivo incorreto!\n\n\n");
    return;
};

Element* allocElement()
{
    Element *pointerElement = (Element *)malloc(sizeof(Element));
    return pointerElement;
};

bool verifyVoidVector(Element* vector[])
{
    int i;
    for (i = 0; i < number; i++) {
        if (vector[i])
            return true;
    }
    
    return false;
};