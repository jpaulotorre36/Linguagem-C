#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Esse algoritmo tem a finalidade de criar uma calculadora */
//fun��es em C
//fun��o soma
float somar (float num1, float num2){
	return num1 + num2;
}
//fun��o subtra��o
float subtracao (float num1, float num2){
	return num1 - num2;
}
//fun��o divis�o
float divisao (float num1, float num2){
	return num1 / num2;
}
//fun��o multiplica��o
float multiplicacao (float num1, float num2){
	return num1 * num2;
}
//fun��o porcentagem
float porcentagem (float num1, float num2){
	return (num1 * num2)/100;
}

int main(int argc, char *argv[]) 
{	
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	float num1, num2, resultado;
	printf("\nCalculadora: \n");
	printf("\n--------------------------------------------------------\n");
	printf("Digite o valor do primeiro numero: \n");
	scanf("%f", &num1);
	printf("Digite o valor do segundo numero: \n");
	scanf("%f", &num2);
	printf("\n--------------------------------------------------------\n");
	printf("Escolha a opera��o: \n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Dividir\n");
	printf("4 - Multiplicar\n");
	printf("5 - Porcentagem\n");
	printf("\n--------------------------------------------------------\n");	
	printf("Digite a op��o desejada: \n");
	scanf("%d", &opcao);
	//estrutura switch case para decidir qual opera��o
	switch(opcao)
	{
		case 1:
			resultado = somar(num1, num2);
			break;
			
		case 2:
			resultado = subtracao(num1, num2);
			break;
			
		case 3:
			if (num2 == 0)
			{
				printf("N�o � possivel dividir por zero!\n");
			}
			else
			{
				resultado = divisao(num1, num2);
			}
			break;
			
		case 4:
			resultado = multiplicacao(num1, num2);
			break;
			
		case 5:
			resultado = porcentagem(num1, num2);
			break;
		default:
			printf("Op��o invalida!\n");
			break;			
		
	}
	printf("\n--------------------------------------------------------\n");	
	printf("Resultado: %.2f\n", resultado);
	printf("\n");	
	system("Pause");
	return 0;
	
}


