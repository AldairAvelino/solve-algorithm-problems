#include<stdio.h>
#include<stdlib.h>

main(){
	int numerosCarrosVendido;
	float totalVenda,salarioFixo,comissao,salarioFinal;
	
	printf("Insira o numero total de carros vendidos: ");
	scanf("%d",&numerosCarrosVendido);
	
	printf("Digite o valor total de suas vendas: ");
	scanf("%f",&totalVenda);
	
	printf("Digite o seu salario fixo: ");
	scanf("%f",&salarioFixo);
	
	printf("Digite o valor que voce recebe por carro vendido: ");
	scanf("%f",&comissao);
	
	salarioFinal = salarioFixo + comissao + (totalVenda*0.05);
	printf("O seu salario final e = %.2f\n", salarioFinal);
	
	system("pause");
}
