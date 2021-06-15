#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco = 15, despezas = 600, lucro;
		int ingressos = 120;
	
	printf("============|===========|============|===========|\n");
	printf("  VALOR     | 	VENDAS  |  DESPEZAS  |   RENDA 	 |\n");
	printf("============|===========|============|===========|\n");
	for(preco; preco > 0; preco = preco - 3){
		lucro = (preco * ingressos) - despezas;
		printf("R$ %9.2lf|R$%9.i|R$%10.2lf|R$ %8.2lf|\n", preco, ingressos, despezas, lucro);	
		ingressos = ingressos + 26;
	}
	printf("============|===========|============|===========|\n");

	return 0;
}
