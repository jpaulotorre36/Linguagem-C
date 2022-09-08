#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numero, resposta;
int cont = 0;

int main(int argc, char *argv[])
{
do
{
	setlocale(LC_ALL, "Portuguese");
	system("cls");
	printf("Tabuada\n");
	printf("n\-----------------------------------------------\n");
	printf("Digite o número da tabuada: ");
	scanf("%d", &numero);
	//a linha vai gerar um laçi finito
	for(cont=0;cont<=10;cont++)
	{
		int result = cont*numero;
		printf("%d x %d = %d\n", numero, cont, result);	
	}
	printf("\n1- Novo calculo\n");
	printf("\n2 - Sair");
	printf("Digite a opção desejada: ");
	scanf("%d", &resposta);	
}while(resposta != 2);	
	system("pause");
	return 0;
	
}
