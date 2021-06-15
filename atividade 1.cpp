#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	int constante = 2000;
	
	printf("Digite um número (1 - 2000): ");
		scanf("%i", &numero);
	
		if(numero > constante) 
			printf("esse número é inválido");
		else{
		numero++;
		for(numero; numero<constante; numero++)
			if(numero%2 == 0) 
				printf("%i\n", numero);
	}

	return 0;
}
