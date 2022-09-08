#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //biblioteca para funções de tempo 

//Jogo de dados


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	setlocale(LC_ALL, "Portuguese");
 	printf("Jogo do dado\n");
 	srand(time(NULL)); //biblioteca time
 	printf("Face: %d\n", rand()%6 + 1); //numeros aleatorios de 0 a 6 
 	printf("\n");	
	system("Pause");
	return 0;
}
