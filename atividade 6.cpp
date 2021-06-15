#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char numero[30];
	printf("DIGITE UM NÚMERO INTEIRO: ");
		fgets(numero, 30, stdin);
	
	int contagem = numero;

	printf("O NÚMERO %s TEM %s DÍGITOS", numero, contagem);	
	
	return 0;	
}
