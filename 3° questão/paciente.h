typedef struct paciente Paciente;

typedef struct lista Lista;

typedef struct fila Fila;

Fila* fila_cria();

void fila_insere(Fila* f, char* cpf);

char* chamar_paciente(Fila* f);

void consultar_posicao(Fila *f, char * cpf);

void listar_quantidade(Fila* f);

void menu();