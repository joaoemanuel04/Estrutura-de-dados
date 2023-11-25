#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "paciente.h"

struct paciente{
    char nome[50];
    char *cpf;
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

void fila_insere(Fila* f, char* cpf){
	int n= strlen(cpf);
	char* nm= (char*)malloc(sizeof(char)*(n+1));
	strcpy(nm, cpf);
	Paciente* p= (Paciente*)malloc(sizeof(Paciente));
	Lista* l=(Lista*)malloc(sizeof(Lista));
	printf("Digite o nome do paciente: ");
	getchar();
	scanf("%[^\n]", p->nome);
	p->cpf= nm;
	printf("Digite o plano de saude do paciente: ");
	getchar();
	scanf("%[^\n]", p->plano_saude);
	l->info= p;
	l->prox= NULL;
	if(f->fim != NULL)
		f->fim->prox= l;
	else
		f->ini= l;
	f->fim= l;
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
	if(f->ini == NULL)
	 	 printf("Nao tem paciente.");
    else{
		Lista* t= f->ini;
		Lista* veri_cpf= f->ini;
		int veri=0;
		int cont=1;
		while(veri_cpf != NULL){
			if(strcmp(veri_cpf->info->cpf, cpf)==0){
				veri= 1;
				break;
			}
			veri_cpf= veri_cpf->prox;
			cont++;
	    }
 	    if(veri==1)
	    	printf("A posicao do paciente eh %d°\n",cont); 
	    else 
	    	printf("CPF invalido");
	}

}

void listar_quantidade(Fila* f){
	Lista* t;
	int cont=0;
	t= f->ini;
	while(t != NULL){
		cont++;
		t= t->prox;
	}
	printf("A quantidade de paciente eh %d\n", cont);
}

void menu(){
	printf("Questao 3 - Controle de ordem de chegada ");
	printf("\n\n1 - Incluir paciente\n");
	printf("2 - Realizar chamada\n");
	printf("3 - Consultar a posicao atual de um paciente\n");
	printf("4 - Listar a quantidade de pacientes atendidos\n");
	printf("\n5 - Sair\n");
}
