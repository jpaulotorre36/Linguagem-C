#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//programa para calcular a média entre duas notas 
int main(int argc, char *argv[])
 {	
    setlocale(LC_ALL, "Portuguese");
 	float nota1,nota2;
 	float media;
 	printf("Digite a nota 1: ");
 	scanf("%f",&nota1);
 	printf("Digite a nota 2: ");
 	scanf("%f",&nota2);
 	
 	media=(nota1+nota2)/2;
 	printf("Sua média é : %.1f\n", &media);
 	
	if (media<6)
	{
		printf("\nAluno reprovado!\n");	
	} 	
	 
	else
	{
		printf("\nAluno Aprovado!\n");
	} 
 	system("pause");
	return 0;
 }
