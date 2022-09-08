#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
		int resposta;
	//lógica do jogador
	do{
		//variaveisinteiras
		int jogador,computador;
		//string var
	
		setlocale(LC_ALL, "Portuguese");
		system("cls");
		printf("\n");	
		printf("\n--------- JoKenPo ----------\n");
		printf("1 . Pedra\n");
		printf("2 . Tesoura\n");
		printf("3. Papel\n");
		printf("Digite a opcao desejada: ");
		scanf("%d",&jogador);
		printf("\n_______________________________\n\n");
		
		//switch case para definir a escolha do jogador
		switch(jogador)
		{
			case 1:
				printf("Jogador escolheu PEDRA\n");
			break;
			
			case 2:
				printf("Jogador escolheu PAPEL\n");
			break;
			
			case 3:
				printf("Jogador escolheu TESOURA\n");
			break;
			
			default:
				printf("Opcao invalida\n");
		}
		// escolha do computador e sua logica 
		// escolha aleatória do computador
		
		srand(time(NULL));
		computador=("%d",rand()%3 + 1);
		switch(computador)
		{
			case 1:
				printf("Computador escolheu PEDRA\n");
			break;
			
			case 2:
				printf("Computador escolheu PAPEL\n");
			break;
			
			case 3:
				printf("Computador escolheu TESOURA\n");
			break;		
		}
		
		//comparação entre a escolha do jogador e a escolha do computador
		if(jogador==computador)
		{
			printf("EMPATE\n");
		}
		else if ((jogador==1 && computador==3) || (jogador==2 && computador==1) ||
		(jogador==3 && computador==2))
		{
			printf("JOGADOR VENCEU\n");
		}
		else
		{
			printf("COMPUTADOR VENCEU\n");
		}
		
		printf("8 - Para jogar novamente: \n");
		printf("9 - Para sair: \n ");
		printf("Digite a opção desejada: ");
		scanf("%d", &resposta);	
		printf("_______________________________\n");
		
		
	}while(resposta != 9);	
		system("pause");
		return 0;
	
}
