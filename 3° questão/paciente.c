#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "paciente.h"

struct paciente{
    char nome[50];
    char cpf[14];
    char plano_saude[50];
};

struct lista{
	Paciente* info;
	Lista* prox;
};

struct fila{
    Lista* ini;
    Lista* fim;
};

Fila* fila_cria(){
	Fila* f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
	
}

Fila* fila_insere(Fila* f){
	Paciente* p= (Paciente*)malloc(sizeof(Paciente));
	Lista* l=(Lista*)malloc(sizeof(Lista));
	printf("Digite o nome do paciente: ");
	getchar();
	scanf("%[^\n]", p->nome);
	printf("Digite o cpf do paciente: ");
	getchar();
	scanf("%[^\n]", p->cpf);
	printf("Digite o plano de saúde do paciente: ");
	getchar();
	scanf("%[^\n]", p->plano_saude);
	l->info= p;
	l->prox= NULL;
	if(f->fim != NULL)
		f->fim->prox= l;
	else
		f->ini= l;
	f->fim= l;
	return f;
}

char* chamar_paciente(Fila* f){
	Lista* t;
	Paciente *p;
	if(f->ini == NULL){
		return NULL;
	}
	t= f->ini;
	p= t->info;
	f->ini= t->prox;
	if (f->ini == NULL)
		f->fim= NULL;
	free(t);
	return p->nome;
}

void consultar_posicao(Fila *f, char* cpf){

}

void listar_quantidade(Fila* f){
	
}

void menu(){
	printf("1-Incluir paciente\n");
	printf("2-Realizar chamada\n");
	printf("3-Consultar a posição atual de um paciente\n");
	printf("4-Listar a quantidade de pacientes atendidos\n");
	printf("5-Sair");
}