#include <stdlib.h>
#include <stdio.h>
#include "livros.h"

Pilha* pilha_cria();

Pilha * pilha_push(Pilha* *pil, Livros* lvro){
	
	//Aloca��o de mem�ria para um novo n� da lista
	Lista * novo = (Lista*)malloc(sizeof(Lista));
	
	//Aloca��o de mem�ria para armazenar o nome do livro
	char* nome = (char*) malloc(41*sizeof(char));
	
	//Solicita��o do nome do livro ao usu�rio
	printf("Digite o nome do livro: ");
	scanf(" %40[^\n]", nome);
	
	/* Linha 23 e 24 = 'prim' ser� um membro da struct Pilha,
	e ser� um ponteiro para a struct 'Lista' */
	
	//Atribui��o do nome do livro ao novo n�
	novo->livro = nome;
	//Atualiza��o dos ponteiros para inserir o novo n� na pilha
	novo->prox = pil->prim;
	pil->prim = novo;
	//Retorno da pilha modificada
	return pil;
	
}

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
