#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pasta.h"

int main(){
	int op;
	Arvore* raiz;
	raiz = arv_criavazia();
	Arvore* subpasta;
	Arvore* buscar;
	char nome[50];
	char buscar_pasta[50];
	
	do{
		system("CLS");
		menu();
		scanf("%d", &op);
		switch (op){
			case 1:
				if (raiz == NULL){
					printf("Digite o nome da pasta: ");
					scanf(" %[^\n]", nome);
					raiz = arv_cria(nome);
				}
				else
					printf("Diretorio raiz ja criado\n");
					system("PAUSE");
				break;
			case 2:			
				printf("Digite o nome da pasta raiz que voce deseja inserir sua subpasta: ");
				scanf(" %49[^\n]", buscar_pasta);
				buscar= arv_pertence(raiz, buscar_pasta);
				if(buscar != NULL){
					do{
						printf("Digite o nome da subpasta: ");
						getchar();
						scanf("%50[^\n]", nome);
						buscar= arv_pertence(raiz, nome);
						if(buscar != NULL)
							printf("Nome ja existente para uma subpasta. Digite novamente\n");
					}while(buscar != NULL);
					subpasta = arv_cria(nome);	
					arv_insere(raiz, subpasta);
				}
				else{
					printf("Pasta raiz nao encontrada");
				}
				system("PAUSE");
				break;
			case 3:
				printf("Digite o nome da pasta que queira remover: ");
				getchar();
				scanf("%49[^\n]", buscar_pasta);
				buscar = arv_pertence(raiz, buscar_pasta);
				if (buscar != NULL){
					if (buscar != raiz){
						arv_atualizar(raiz, buscar);
						arv_libera(buscar);
					}
					else{
						arv_libera(buscar);
						raiz = arv_criavazia();
					}
						
				}					
				else
					printf("Pasta nao encontrada\n");
				system("PAUSE");
				break;
			case 4:
				if (raiz != NULL){
					arv_imprimi(raiz);
					system("PAUSE");
				}
				else
					printf("Nenhuma pasta criada\n");
				break;
			default:
				break;
		}
	} while (op != 5);
	
	return 0;
}
