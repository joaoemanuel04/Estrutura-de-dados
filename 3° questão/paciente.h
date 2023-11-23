typedef struct paciente Paciente;

typedef struct lista Lista;

typedef struct fila Fila;

Fila* fila_cria();

Fila* fila_insere(Fila* f);

char* chamar_paciente(Fila* f);

void consultar_posicao(Fila *f, char * cpf);

void listar_quantidade(Fila* f);

void menu();