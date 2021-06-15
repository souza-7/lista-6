#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, fatorial = 1;
	
	printf("QUAL O FATORIAL A SER CALCULADO? ");
		scanf("%i", &numero);
	
	while(numero > 0){ 
		fatorial = fatorial*numero;  
	}
	
	printf("FATORIAL DE %i é: %i", numero, fatorial);
	
	return 0;
}



