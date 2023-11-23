#include <stdlib.h>
#include <stdio.h>
#include "livros.h"

struct livro{
    char titulo [50];
    char autor [50];
    int codigo;
};

struct lista{
    Livro * info;
    Lista* prox;
};
	
struct pilha{
    Lista* prim;
};

	
Pilha* pilha_cria(void){
	Pilha* p= (Pilha*)malloc(sizeof(Pilha));
	p-> prim= NULL;
	return p;
}
		

Pilha* pilha_push(Pilha* pil){
	Livro* lvro;
	lvro= (Livro*)malloc(sizeof(Livro));
	printf("Digite o código do livro: ");
	scanf("%d", &lvro->codigo);
	printf("Digite o titulo do livro: ");
	getchar();
	scanf("%49[^\n]", lvro->titulo);
	printf("Digite o autor do livro: ");
	getchar();
	scanf("%49[^\n]", lvro->autor);
	Lista * novo = (Lista*)malloc(sizeof(Lista));
	novo->info = lvro;
	novo->prox = pil->prim;
	pil->prim = novo;
	return pil;
	
}

int pilha_pop(Pilha* p){
	Lista* t;
	Livro* livro;
	if(pilha_vazia(p)){
		return NULL;
	}
	else{
		t = p->prim;
		livro = t->info;
		p->prim = t->prox;
		free(t);
		return livro->codigo;
	}	
}
	

void pilha_busca(Pilha* p){
	if(pilha_vazia(p)){
		printf("Não possui livros.\n ");
	}
	else
		printf("Código: %d\nTitulo: %s\nAutor: %s\n", p->prim->info->codigo, p->prim->info->titulo, p->prim->info->autor);
}

int pilha_vazia(Pilha* p){
	return (p->prim == NULL);
}

void menu(){
	printf("1-Inserir elemento\n");
	printf("2-Remover elemento\n");
	printf("3-Busca elemento do topo\n");
	printf("4-Sair");
}

