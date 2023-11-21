#include <stdlib.h>
#include <stdio.h>
#include "nome.h"
#include <string.h>

Lista* lst_cria();

Lista* lst_insere(Lista* l, char nome);

Lista* lst_remove(Lista* l, char nome);

Lista* lst_buscar(Lista* l, char nome) {
	Lista* p;
	for(p=l; p!=NULL; p = p->prox){
		if(strcmp(p->info, nome) == 0)
			return p;
	
	}
	return NULL;
};

void lst_imprimi(Lista* l);

void menu();