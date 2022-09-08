#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//funções em C
void teste(void);

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");
	printf("\nExemplo de Função\n");
	teste();
	system("Pause");
	return 0;
}

void teste()
{
	printf("\nMeu nome é João Paulo!\n");
}
