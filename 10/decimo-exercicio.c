#include<stdio.h>
#include<stdlib.h>

main(){
	float custoFabrica, imposto, percentualDistribuidor, custoConsumidor;
	
	printf("Digite o custo de fabrica de um carro: ");
	scanf("%f",&custoFabrica);
	
	percentualDistribuidor = (custoFabrica*0.28)+custoFabrica;
	imposto = (custoFabrica*0.45)+custoFabrica;
	custoConsumidor = percentualDistribuidor + imposto + custoFabrica;
	
	printf("O custo final ao consumidor e = %.2f\n", custoConsumidor);
	
	system("pause");
}
