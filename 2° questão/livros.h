typedef struct livro Livros;

typedef struct lista Lista;

typedef struct pilha Pilha;

Pilha* pilha_cria();

void pilha_push(Pilha* p, Livros* lvro);

Livros* pilha_pop(Pilha* p);

void pilha_busca(Pilha* p);

int pilha_vazia(Pilha* p);

void menu();