#include <stdio.h>
//stander input e output library
#include <stdlib.h>
//stander library do sistema
/*comentários em bloco:  run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <locale.h>
//ponto de partida
//argc nuero de linhas
//argv conteudo da linhas
//variavel tipo de dados char
int main(int argc, char *argv[]) 
{	
	//a linha abixo p/config de protuguês
	setlocale(LC_ALL, "Portuguese");
	//linha p/ mudar cor do texto. primeiro code fundo e segundo letra
	system("color 1F");
	printf("Olá Mundo! \n");
	system("pause");
	//comando p/ limpar a tela
	system("cls");
	system("color F0");
	printf("Professor João Paulo \n");
	system("pause");
	return 0;
}



