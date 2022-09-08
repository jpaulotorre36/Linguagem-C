#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**
 *	Sistema de Gest�o de Academias
 *	estudo de estruturas de repeti��o 
 *
 */

int main(int argc, char *argv[]) {
	// Setar idioma portugu�s para impress�o de texto
	setlocale(LC_ALL,"Portuguese");
	setlocale(LC_NUMERIC, "pt-BR");
	// Tipos de vari�veis
	char professor[30] = {"Jorge "}; //[30] -> m�ximo de 30 caracteres
	char personal = 's';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("    /\\                | |              (_)   \n");   
	printf("   /  \\   ___ __ _  __| | ___ _ __ ___  _  __ _ \n");
	printf("  / /\\ \\ / __/ _` |/ _` |/ _ \\ '_ ` _ \\| |/ _` |\n");
	printf(" / ____ \\ (_| (_| | (_| |  __/ | | | | | | (_| |\n");
	printf("/_/    \\_\\___\\__,_|\\__,_|\\___|_| |_| |_|_|\\__,_|\n");
    printf("\n");                                            
	
	printf("\n");
	//Menu de op��es
	int opcao;
	printf("______________________________________________________________\n\n");
	printf("1. Gest�o de funcion�rios\n");
	printf("2. Cadastrar aluno\n");

	printf("\n");
	printf("Digite a op��o desejada: ");
	scanf("%d",&opcao);
	switch(opcao) {
		case 1:
			system("cls");
			printf("GEST�O DE FUNCION�RIOS\n");
			printf("_____________________________\n");
			// %s -> Ler o tipo de vari�vel
			// , (v�rgula) concatenar(unir) um texto com o conte�do da vari�vel
			printf("Professor: %s\n", professor);
			printf("Personal Trainer(s/n): %c\n", personal);
			printf("Per�odo: %d\n", periodo);
			// .1 antes de %f arredonda para 1 casa decimal
			printf("Carga hor�ria semanal: %.1f\n", cargaHoraria);
			printf("Sal�rio: R$ %.2lf\n", salario);
			printf("_____________________________\n");
		break;
		case 2:
			system("cls");
			//limpar o buffer (fluxo)
			fflush(stdin);
			//vari�veis
			char aluno[50];
			char sexo;
			int idade;
			float peso, altura, imc;			
			// Entrada de dados
			printf("CADASTRO DE ALUNO \n\n");
			printf("Nome do aluno(a): ");
			// o comando gets � usado especificamente para capturar String (char[])
			gets(aluno);
			printf("Sexo(M/F): ");
			// o comando scanf � usado para capturar as demais vari�veis
			// o s�mbolo &(amper) � usado para referenciar a mem�ria
			scanf("%c",&sexo);
			printf("Idade: ");
			scanf("%d", &idade);
			printf("Peso(kg): "); //entrada
			// ATEN��O! Para capturar um n�mero n�o inteiro usar (,) v�rgula
			scanf("%f", &peso);
			printf("Altura(m): "); //entrada
			scanf("%f", &altura);
			// processamento
			imc = peso / (altura * altura);
			printf("\n");
			system("pause");
			system("cls");
			// Setar idioma portugu�s para impress�o de texto de uma vari�vel
			setlocale(LC_ALL, "C");
			printf("Ficha do aluno(a):\n");
			printf("______________________________\n");
			printf("Aluno(a): %s\n", aluno);
			printf("Sexo: %c\n", sexo);
			printf("Idade: %d\n", idade);
			printf("Peso: %.2f\n", peso);
			printf("Altura: %.2f\n", altura);
			printf("______________________________\n");
			printf("IMC: %.2f\n",imc);
			// Setar idioma portugu�s para impress�o de texto
			setlocale(LC_ALL,"Portuguese");
			if (imc < 17) {
				printf("Muito abaixo do peso\n");
			} else if (imc < 18.5) {
				printf("Abaixo do peso\n");
			} else if (imc < 25) {
				printf("Peso normal\n");
			} else if (imc < 30) {
				printf("Acima do peso\n");
			} else if (imc < 35) {
				printf("Obesidade I\n");
			} else if (imc < 40) {
				printf("Obesidade II (severa)\n");
			} else
				printf("Obesidade III (m�rbida)\n");
			printf("______________________________\n");			
		break;
		default:
			printf("Op��o inv�lida\n");
		break;					
	}
	system("pause");
	return 0;
}

