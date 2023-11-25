#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pasta.h"

struct arvore
{
	char * info;
	Arvore* filho;
	Arvore* irmao;
};

Arvore* arv_criavazia(){
	return NULL;
}

Arvore* arv_cria(char* nome){
	int n= strlen(nome);
	char* nm=(char*)malloc(sizeof(char)*(n+1));
	strcpy(nm, nome);
	Arvore* raiz= (Arvore*)malloc(sizeof(Arvore));
	raiz->info= nm;
	raiz->filho= NULL;
	raiz->irmao= NULL;
	return raiz;
}

void arv_insere(Arvore* raiz, Arvore* pasta){
	pasta->irmao = raiz->filho;
	raiz->filho = pasta;
}

void arv_libera(Arvore* raiz){
	Arvore* p = raiz->filho;
	while(p != NULL){
		Arvore* t = p->irmao;
		arv_libera(p);
		p = t;
	}
	free(raiz);
}

void arv_atualizar(Arvore* raiz, Arvore* pasta){
	Arvore *sub;
	if ((raiz->filho == pasta) || (raiz->irmao == pasta)){
		if (raiz->filho == pasta){
			raiz->filho = pasta->irmao;
		}
		if (raiz->irmao == pasta)
			raiz->irmao = pasta->irmao;
	}
	else{
		for(sub= raiz->filho; sub != NULL; sub= sub->irmao){
			arv_atualizar(sub, pasta);
		}
	}
}	

void arv_imprimi(Arvore* raiz){
	Arvore* sub;
	printf("%s\n  ", raiz->info);
	for(sub= raiz->filho; sub != NULL; sub= sub->irmao){
		arv_imprimi(sub);
	}
}

Arvore* arv_pertence(Arvore* raiz, char* nome){
	Arvore* sub;
	Arvore* a;
	if(strcmp(raiz->info, nome) == 0)
		return raiz;
	for(sub= raiz->filho; sub != NULL; sub= sub->irmao){
		a= arv_pertence(sub, nome);
		if(a !=  NULL)
			return a;
	}
	return NULL;
}


void menu(){
	printf("Questao 4 - Arvores \n\n");
	printf("1 - Criar pasta raiz \n");
	printf("2 - Inserir subpasta \n");
	printf("3 - Remover Subpasta \n");
	printf("4 - Imprimir Estrutura de pastas \n");
	printf("\n5 - Sair\n\n");
	printf("Digite a opcao desejada: ");
}
