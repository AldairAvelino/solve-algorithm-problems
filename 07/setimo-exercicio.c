#include<stdio.h>
#include<stdlib.h>

main(){
	int anos, dias, meses, idade_em_dias;
	int dias_do_ano, dias_do_mes;
	dias_do_ano = 365;
	dias_do_mes = 30;
	
	printf("Digite quantos anos tens: ");
	scanf("%d",&anos);
	
	printf("Digite o valor do mes: ");
	scanf("%d",&meses);
	
	printf("Digite o valor do dia: ");
	scanf("%d",&dias);
	
	idade_em_dias = (anos*dias_do_ano) + (meses*dias_do_mes) +dias;
	
	printf("A tua idade em dias e igual a %d", idade_em_dias);
	printf("\n");
	
	system("pause");
}
