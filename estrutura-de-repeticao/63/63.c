#include<stdio.h>
#include<stdlib.h>

main(){
	int i, num, totalSoma;
	i = 1;
	totalSoma = 0;
	
	for(i; i<=10; i++){
		printf("Digite o valor de n(%d): ",i);
		scanf("%d",&num);
		totalSoma+=num;
	}
	printf("\n\nA SOMA TOTAL e = %d \n",totalSoma);
	system("pause");
}
