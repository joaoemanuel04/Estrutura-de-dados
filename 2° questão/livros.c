#include <stdlib.h>
#include <stdio.h>
#include "livros.h"

Pilha* pilha_cria();

void pilha_push(Pilha* p, Livros* lvro);

float pilha_pop(Pilha* p){
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

void pilha_busca(Pilha* p){
	return p->prim;
}

int pilha_vazia(Pilha* p);

void menu(){
	printf("1-Inserir elemento\n");
	printf("2-Remover elemento\n");
	printf("3-Busca elemento do topo\n");
	printf("4-Sair");
}