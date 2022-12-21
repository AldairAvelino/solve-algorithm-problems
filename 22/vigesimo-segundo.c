#include<stdio.h>
#include<stdlib.h>

main(){
	int numeroHorasTrabalhadasUmMes, qtdHorasExtras;
	float salarioPorHora, salarioTotal, salario, valorHoraExtra, salarioExtras;
	
	printf("Informe o numero de horas trabalhadas em um mes: ");
	scanf("%d",&numeroHorasTrabalhadasUmMes);
	
	printf("Informe o salario por hora: ");
	scanf("%f",&salarioPorHora);
	
	if(numeroHorasTrabalhadasUmMes <= 160){
		salario = numeroHorasTrabalhadasUmMes * salarioPorHora;
		valorHoraExtra = 0;
		
		salarioTotal = salario + salarioExtras;
		printf("O salario total do funcionario foi de: %.2f\n", salarioTotal);
	}else{
		salario = 160 * salarioPorHora;
		qtdHorasExtras = numeroHorasTrabalhadasUmMes - 160;
		valorHoraExtra = salarioPorHora + (salarioPorHora * 50) / 100;
		salarioExtras = valorHoraExtra * qtdHorasExtras;
		
		salarioTotal = salario + salarioExtras;
		printf("O salario total do funcionario acrescido com horas extras foi de: %.2f\n", salarioTotal);
	}
	
	system("pause");
}
