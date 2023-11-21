#include <stdlib.h>
#include <stdio.h>
#include "nome.h"
#include <string.h>

Lista* lst_cria();

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

void lst_imprimi(Lista* l);

void menu(){
	printf("1- Inseri nome\n");
	printf("2- Remover nome\n");
	printf("3- Pesquisar nome\n");
	printf("4- Imprimi\n");
	printf("5-Sair");
	
}