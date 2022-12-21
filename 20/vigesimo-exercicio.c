#include<stdio.h>
#include<stdlib.h>

main(){
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("%d - %d\n", num2, num1);
	}else{
		if(num1 < num2){
			printf("%d - %d\n", num1, num2);
		}else{
			printf("%d = %d\n", num1, num2);
		}
	}
	
	system("pause");
}
