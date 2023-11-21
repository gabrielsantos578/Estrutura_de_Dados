int hash(char valor[]);
int key(char valor[]);
void insertElementHash(Element *vector[], Element *data, int hash);
void viewHashTable(Element *vector[]);

int hash(char valor[])
{
    char caractere;
    int hash = 0, i;

    for (i = 0; valor[i] != '\0'; i++)
    {
        caractere = valor[i];
        hash += (int)caractere;
    }

    return (hash % number);
}

int key(char valor[])
{
    char caractere;
    int key = 0, i, multi, aux;

    for (i = 0; valor[i] != '\0'; i++)
    {
        caractere = valor[i];
        aux = ((int) caractere) + pow(2, i);
        multi = (key == 0) ? 1 : (log10(abs(key)) + 1);
        key += aux * multi;
        //printf("%d - ", key);
    }

    return key;
}

void insertElementHash(Element *vector[], Element *data, int hash)
{
    char vectorString[100], dataString[100];

    if (!vector[hash])
    {
        data->proximoElemento = vector[hash];
        vector[hash] = data;
    }
    else
    {
        strcpy(vectorString, vector[hash]->valorElemento);
        strcpy(dataString, data->valorElemento);

        if (strcmp(vectorString, dataString))
        {
            data->proximoElemento = vector[hash];
            vector[hash] = data;
        }
        else
        {
            data->proximoElemento = NULL;
            vector[hash] = data;
        }
    }
}

void viewHashTable(Element *vector[])
{
    int i;
    Element *element;

    for (i = 0; i < number; i++)
    {

        for (element = vector[i]; element; element = element->proximoElemento)
            printf("%s --> ", element->valorElemento);

        printf("NULL\n");
    }
}