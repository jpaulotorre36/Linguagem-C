#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//fun��es em C
void teste(void);

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");
	printf("\nExemplo de Fun��o\n");
	teste();
	system("Pause");
	return 0;
}

void teste()
{
	printf("\nMeu nome � Jo�o Paulo!\n");
}
