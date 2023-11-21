typedef struct paciente Paciente;

typedef struct lista Lista;

typedef struct fila Fila;

Fila* fila_cria();

void insere_paciente(Fila* f, Paciente* p);

Paciente* chamar_paciente(Fila* f);

void consultar_posicao(Fila *f, Paciente* p);

void listar_quantidade(Fila* f);

void menu();