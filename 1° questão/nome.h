typedef struct lista Lista;

Lista* lst_cria();

Lista* lst_insere(Lista* l, char nome);

Lista* lst_remove(Lista* l, char nome);

Lista* lst_buscar(Lista* l, char nome);

void lst_imprime(Lista* l);
//alterei o nome da fun��o de lst_imprimi para lst_imprime

void menu();
