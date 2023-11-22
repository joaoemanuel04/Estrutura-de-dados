typedef struct livro Livros;

typedef struct lista Lista;

typedef struct pilha Pilha;

Pilha* pilha_cria();

//alterei o nome da variavel do ponteiro de 'p' para 'pil'
Pilha pilha_push(Pilha* pil, Livros* lvro);

Livros* pilha_pop(Pilha* p);

void pilha_busca(Pilha* p);

int pilha_vazia(Pilha* p);

void menu();
