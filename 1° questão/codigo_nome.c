#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "nome.h"

int main()
{
	int op;
	char nome[50];
	Lista* nomes;
	Lista* b;
	nomes= lst_cria();
	do{
		system("CLS");
		menu();
		printf("\nDigite uma das opcoes acima: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			printf("Digite o nome que deseja colocar: ");
			getchar();
			scanf("%49[^\n]", nome);
			nomes= lst_insere(nomes, nome);
			printf("\n\t---- Nome registrado com sucesso! ----\n\n");
			system("PAUSE");
			break;
	    case 2:
	    	printf("Digite o nome que deseja remover: ");
			getchar();
			scanf("%[^\n]", nome);
			nomes= lst_remove(nomes, nome);
			b= lst_buscar(nomes, nome);
			if (b==NULL)
				printf("Nome excluido com sucesso.\n\n");
			else
				printf("Nome nao excluido\n\n");
			system("PAUSE");
			break;
		case 3:
			printf("Digite o nome que deseja pesquisar:\n ");
			getchar();
			scanf("%[^\n]", nome);
			b= lst_buscar(nomes, nome);
			if(b== NULL)
				printf("Nome nao encontrado\n\n");
			else
				printf("Nome encontrado com sucesso.\n\n");
			system("PAUSE");
			break;
		case 4:
			lst_imprime(nomes);
			system("PAUSE"); 
			break;
		default:
			break;
		}
	}while(op != 5);
	return 0;
}
