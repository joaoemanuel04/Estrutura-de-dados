#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nome.h"

/* a 'struct lista' - linha 11 até 14 - define uma estrutura de lista encadeada,
onde cada nó contém um ponteiro para uma string do tipo char (info)
e um ponteiro para o próximo nó (prox).*/
typedef struct lista Lista;

struct lista{
	char* info;
	struct lista* prox;
};

/*a função lst_cria() cria uma lista vazia,
retornando um ponteiro nulo para indicar
que não tem nenhum nó inicial na lista.*/
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

//alterei o nome da função de lst_imprimi para lst_imprime
/*Claro, a função lst_imprime - linha 57 até 68 - percorre uma lista encadeada
e imprime os dados de cada nó, mostrando também a conexão entre os nós,
indicando o próximo nó, se existir, ou que o próximo é NULL.*/
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
