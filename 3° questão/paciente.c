#include <stdlib.h>
#include <stdio.h>
#include "paciente.h"


Fila* fila_cria();

void insere_paciente(Fila* f, Paciente* p);

Paciente* chamar_paciente(Fila* f){
	Lista* t;
	Paciente *p;
	if(f == NULL){
		printf("Não tem paciente para ser atentido");
		exit(1);
	}
	t= f->ini;
	p= t->info;
	f->ini= t->prox;
	if (f->ini == NULL)
		f->fim== NULL
	free(t);
	return p;
}

void consultar_posicao(Fila *f, Paciente* p);

void listar_quantidade(Fila* f);

void menu(){
	printf("1-Incluir paciente\n");
	printf("2-Realizar chamada\n");
	printf("3-Consultar a posição atual de um paciente\n");
	printf("4-Listar a quantidade de pacientes atendidos\n");
	printf("5-Sair");
}