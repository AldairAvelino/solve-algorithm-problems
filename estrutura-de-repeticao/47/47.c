#include<stdio.h>
#include<stdlib.h>

main(){
	float num1, num2, divisao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&num1);
	
	while(num2==0){
		printf("Digite o segundo valor: ");
		scanf("%f",&num2);
		if(num2==0){
			printf("\nVALOR INVALIDO\n");
		}
	}
	
	divisao = num1 / num2;
	printf("\n%.1f / %.1f = %.1f\n",num1, num2, divisao);
	
	system("pause");
}
