#include <stdlib.h>
#include <stdio.h>
#include "livros.h"

Pilha* pilha_cria();

void pilha_push(Livro* p, Livro* lvro);

float pilha_pop(Livro* p){
	Lista* t;
	float v;
	if(pilha_vazia(p)){
		printf("Pilha vazia.\n");
		exit(1);}
		
		t = p->prim;
		v = t->info;
		p->prim = t->prox;
		free(t);
		return v;	
	}
	
}

void pilha_busca(Livro* p);

int pilha_vazia(Livro* p);

void menu();