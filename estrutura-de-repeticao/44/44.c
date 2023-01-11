#include<stdio.h>
#include<stdlib.h>

main(){
	float num1, num2, divisao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&num1);
	do{
		printf("Digite o segundo valor: ");
		scanf("%f",&num2);
	}while(num2==0);
	
	divisao = num1 / num2;
	printf("\n%.1f / %.1f = %.1f\n",num1, num2, divisao);
	
	system("pause");
}
