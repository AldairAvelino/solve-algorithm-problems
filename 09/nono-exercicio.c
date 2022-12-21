#include<stdio.h>
#include<stdlib.h>

main(){
	float salarioMensalActual, percentualReajuste, novoSalario;
	printf("Digite o salario mensal actual: ");
	scanf("%f",&salarioMensalActual);
	
	printf("Digite o percentual de reajuste: ");
	scanf("%f",&percentualReajuste);
	
	novoSalario = (salarioMensalActual*percentualReajuste) / 100;
	printf("O novo salario e = %.2f\n", novoSalario);
	system("pause");
}
