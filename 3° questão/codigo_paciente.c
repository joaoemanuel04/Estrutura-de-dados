#include <stdlib.h>
#include <stdio.h>
#include "paciente.h"

int main()
{
	int op;
	char cpf[14];
	Fila* f;
	char* p;
	f= fila_cria();
	do{
		system("CLS");
		menu();
		printf("\nDigite uma das opções acima: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			f= fila_insere(f);
			printf("Paciente inserido com sucesso. ");
			system("PAUSE");
			break;
	    case 2:
	    	p= chamar_paciente(f);
			if (p==NULL)
				printf("Não tem paciente para realizar consulta");
			else 
				printf("Chamando paciente: %s\n", p);
			system("PAUSE");
			break;
		case 3:
			printf("Digite o cpf do cliente que deseja consultar a possição: ");
			getchar();
			scanf("%[^\n]", cpf);
			consultar_posicao(f, cpf);
			system("PAUSE");
			break;
		case 4:
			listar_quantidade(f);
			system("PAUSE"); 
			break;
		default:
			break;
		}
	}while(op != 5);
	return 0;
}