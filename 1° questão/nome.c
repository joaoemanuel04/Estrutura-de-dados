#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nome.h"

struct lista{
	char* info;
	Lista* prox;
};

Lista* lst_cria(){
	return NULL;
}

Lista* lst_insere (Lista* l, char* nome){
	int n= strlen(nome);
	char* nm= (char*)malloc(sizeof(char)* (n+1));
	strcpy(nm, nome);
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo-> info = nm;
	novo-> prox = l;
	return novo;
}

Lista* lst_remove(Lista* l, char* nome){
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

Lista* lst_buscar(Lista* l, char* nome) {
	Lista* p;
	for(p=l; p!=NULL; p = p->prox){
		if(strcmp(p->info, nome) == 0)
			return p;
	
	}
	return NULL;
};

void lst_imprime(Lista* l){
	Lista* p;
	for(p=l; p!=NULL; p = p->prox){
		printf("Nome: %s\n", p->info);
	}
	
}

void menu(){
	printf("\nQuestao 1 - Lista Encadeada de Nomes:\n\n");
	printf("1 - Inserir Nome\n");
	printf("2 - Remover Nome\n");
	printf("3 - Pesquisar Nome\n");
	printf("4 - Imprimir Conteudo \n");
	printf("\n5 - Sair\n");
	
}
