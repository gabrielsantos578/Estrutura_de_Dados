typedef struct Element
{

    int chaveElemento;
    
    char valorElemento[100];

    struct Element *proximoElemento;

} Element;