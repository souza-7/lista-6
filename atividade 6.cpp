#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char numero[30];
	printf("DIGITE UM N�MERO INTEIRO: ");
		fgets(numero, 30, stdin);
	
	int contagem = numero;

	printf("O N�MERO %s TEM %s D�GITOS", numero, contagem);	
	
	return 0;	
}
