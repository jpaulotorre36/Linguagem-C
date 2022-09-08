#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//switch case
//var globais
int numero;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");
	printf("Sistemas\n\n");
	printf("1 - Windows\n");
	printf("2 - Linux\n");
	printf("\n");
	printf("\nEscolha a opção desejada:\n ");
	scanf("%d", &numero);
	switch(numero)
	{
		case 1: 
			system("cls");
			printf("\nIniciando o Windows...\n");
			break;
		case 2: 
			system("cls");
			printf("\nIniciando o Linux...\n");
			break;
		default:
			printf("\Opção invalida!\n");
	}

	system("pause");
	return 0;
}
