#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");
	//tipo de dado de caractere. 50 tamanho maximo
	char nome[50];	
	printf("Digite o seu nome: ");
	//pegar, ler e armazenar em nome
	gets(nome); 
	system("cls");
	// %s referencia a nome, busca na memoria a variavel armazenada
	printf("Bem vindo %s\n ", nome);
	system("pause");
	return 0;
}
