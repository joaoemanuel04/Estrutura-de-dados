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
		printf("\nDigite uma das opcoes acima: ");
		scanf("%d", &op);
		switch(op)
		{
		case 1:
			printf("Digite o CPF do paciente: ");
			getchar();
			scanf("%[^\n]", cpf);
			fila_insere(f, cpf);
			printf("Paciente inserido com sucesso. ");
			system("PAUSE");
			break;
	    case 2:
	    	p= chamar_paciente(f);
			if (p==NULL)
				printf("Nao existe paciente cadastrado para realizar consulta!");
			else 
				printf("\nChamando paciente: %s\n", p);
			system("PAUSE");
			break;
		case 3:
			printf("Digite o CPF do paciente que deseja consultar a posicao: ");
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
