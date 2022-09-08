#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	

	int idade;
	printf("Qual a sua idade? \n");
	scanf("%d", &idade);
	printf("Idade: %d", idade);	
	if(idade<18)
	{
		printf("\nmenor de idade\n");
	}
	if(idade >+ 18)
	{
		printf("\nmaior de idade\n");
	}
	system("pause");
	return 0;
}
