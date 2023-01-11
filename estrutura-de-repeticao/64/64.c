#include<stdio.h>
#include<stdlib.h>

main(){
	int i, num, totalInferior;
	i = 1;
	totalInferior = 0;
	
	for(i; i<=10; i++){
		printf("Digite o valor de n(%d): ",i);
		scanf("%d",&num);
		if(num<40){
			totalInferior+=num;
		}
	}
	printf("\n\nA SOMA final dos NUMEROS Inferiores a 40 e = %d \n",totalInferior);
	system("pause");
}
