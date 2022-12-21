#include<stdio.h>
#include<stdlib.h>

main(){
	printf("Digite um numero: ");
	int num;
	scanf("%d",&num);
	
	if(num >= 0){
		printf("POSITIVO\n");
	}else{
		printf("NEGATIVO\n");
	}
	
	system("pause");
}
