typedef struct lista Lista;

typedef struct pilha Pilha;

typedef struct livro Livro;

Pilha* pilha_cria();

Pilha* pilha_push(Pilha* pil);

int pilha_pop(Pilha* p);

void pilha_busca(Pilha* p);

int pilha_vazia(Pilha* p);

void menu();
