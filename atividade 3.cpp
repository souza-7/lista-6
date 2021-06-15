#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura, mediaMulheres, maiorAltura = 0, menorAltura = 10000,somaMulheres;
	int homens, mulheres, i = 1;
	char sexo;
	
	for(i = 1; i <= 10; i++){
		while(true){
			printf("Por favor, informe o sexo (M - Masculino || F - Feminino): ", i);
				scanf("%c", &sexo);
			if(sexo != 'm' and sexo != 'f'){
				printf("Sexo inválido.\n");
			} else{break;}
		}
		while(true){
			printf("Por favor a altura da pessoa: ", i);
			scanf("%f", &altura);
			if(altura < 0.1){
				printf("Altura inválida.\n");
			} else{break;}
		}
		if(altura > maiorAltura)
			maiorAltura = altura;
		if(altura < menorAltura)
			menorAltura = altura;
		if(sexo == 'm')
			homens++;
		if(sexo == 'f'){
			mulheres++;
			somaMulheres += altura;
		}
		
		getchar();
		system("cls");
	}
	
	mediaMulheres = somaMulheres/mulheres;
	
	printf("Média da altura das mulheres: %.2f\n", mediaMulheres);
	printf("Maior Altura: %.2f\n", maiorAltura);
	printf("Quantidade de homens: %d", homens);
	printf("Menor Altura: %.2f\n", menorAltura);
	
	return 0;
}
