#include<stdio.h>
#include<stdlib.h>

main(){
	int num, antecessor;
	printf("Digite um Numero: ");
	scanf("%d", &num);
	
	if(num>=0){
		antecessor = num-1;
	}else{
		antecessor = num+1;
	}
	
	printf("O antecessor de %d e o numero %d", num, antecessor);
	printf("\n");
	system("pause");
}
