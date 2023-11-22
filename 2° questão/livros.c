#include <stdlib.h>
#include <stdio.h>
#include "livros.h"

Pilha* pilha_cria();

void pilha_push(Pilha* p, Livros* lvro);

 Livros* pilha_pop(Pilha* p){
	Lista* t;
	Livros* livro;
	if(pilha_vazia(p)){
		printf("Pilha vazia.\n");
		exit(1);}
 
		t = p->prim;
		livro = t->info;
		p->prim = t->prox;
		free(t);
		return livro;	
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