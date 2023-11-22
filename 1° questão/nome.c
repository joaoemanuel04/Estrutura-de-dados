#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nome.h"

/* a 'struct lista' - linha 11 at� 14 - define uma estrutura de lista encadeada,
onde cada n� cont�m um ponteiro para uma string do tipo char (info)
e um ponteiro para o pr�ximo n� (prox).*/
typedef struct lista Lista;

struct lista{
	char* info;
	struct lista* prox;
};

/*a fun��o lst_cria() cria uma lista vazia,
retornando um ponteiro nulo para indicar
que n�o tem nenhum n� inicial na lista.*/
Lista* lst_cria(){
	return NULL;
}

Lista* lst_insere(Lista* l, char nome);

Lista* lst_remove(Lista* l, char nome){
	Lista* ant= NULL;
	Lista* p= l;
	while(p != NULL && strcmp(p->info, nome))
	{
		ant= p;
		p= p->prox;
	}
	if (p == NULL)
		return l;
	if(ant==NULL)
		l= p->prox;
	else
		ant->prox= p->prox;
	free(p);
	return l;
}

Lista* lst_buscar(Lista* l, char nome) {
	Lista* p;
	for(p=l; p!=NULL; p = p->prox){
		if(strcmp(p->info, nome) == 0)
			return p;
	
	}
	return NULL;
};

//alterei o nome da fun��o de lst_imprimi para lst_imprime
/*Claro, a fun��o lst_imprime - linha 57 at� 68 - percorre uma lista encadeada
e imprime os dados de cada n�, mostrando tamb�m a conex�o entre os n�s,
indicando o pr�ximo n�, se existir, ou que o pr�ximo � NULL.*/
void lst_imprime(Lista* l){
	Lista* p;
	for(p=l; p!=NULL; p = p->prox){
		if(p->prox !=NULL){
			printf("%s\t || prox -> %s \n", p->info, p->prox->info);
		}else{
			printf("%s\t || p-> NULL", p->info);
		}
	}
	printf("\n");
	
}


void menu(){
	printf("1- Inseri nome\n");
	printf("2- Remover nome\n");
	printf("3- Pesquisar nome\n");
	printf("4- Imprime\n");
	printf("5-Sair");
	
}
