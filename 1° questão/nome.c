#include <stdlib.h>
#include <stdio.h>
#include "nome.h"

Lista* lst_cria();

Lista* lst_insere(Lista* l, char nome);

Lista* lst_remove(Lista* l, char nome);

Lista* lst_buscar(Lista* l, char nome);

void lst_imprimi(Lista* l);

void menu();