#include <stdlib.h>
#include <stdio.h>
#include "livros.h"
#include <locale.h>
int main()
{
	int op, b;
	Pilha* p;
	Livro* lvr;
	p= pilha_cria();
	do{
		system("CLS");
		menu();
		printf("\nDigite uma das opções acima: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			p= pilha_push(p);
			printf("livro inserido com sucesso. ");
			system("PAUSE");
			break;
	    case 2:
	    	b= pilha_pop(p);
	    	if (b==NULL)
	    		printf("Não possui livro na pilha.\n");
	    	else
	    		printf("Livro com o código %d foi removido.\n", b);
	    	system("PAUSE");
			break;
		case 3:
			printf("O livro que está no topo é: \n");
			pilha_busca(p);
			system("PAUSE");
			break;
		default:
			break;
		}
	}while(op != 4);
	return 0;
}