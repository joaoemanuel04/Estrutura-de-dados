typedef struct arvore Arvore;

Arvore* arv_criavazia();

Arvore* arv_cria(char* nome);

void arv_insere(Arvore* raiz, Arvore* pasta);

void arv_remove(Arvore* raiz, char* nome);

Arvore* arv_pertence(Arvore* raiz, char* nome);

void arv_imprimi(Arvore* raiz);

void arv_libera(Arvore* raiz);

void arv_atualizar(Arvore* raiz, Arvore* pasta);

void menu();

