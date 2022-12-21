#include<stdio.h>
#include<stdlib.h>

main(){
	float salarioFixo, salarioTotal;
	int valorVendasEfectuadas;
	
	printf("Digite o valor do salario fixo: ");
	scanf("%f",&salarioFixo);
	
	printf("Digite o valor de vendas efectuadas: ");
	scanf("%d",&valorVendasEfectuadas);
	
	if(valorVendasEfectuadas >1500){
		salarioTotal = salarioFixo + (valorVendasEfectuadas * 0.05);
		printf("O salario total e de: %.2f\n", salarioTotal);
	}else{
		salarioTotal = salarioFixo + (valorVendasEfectuadas * 0.03);
		printf("O salario total e de: %.2f\n", salarioTotal);
	}
	
	system("pause");
}
