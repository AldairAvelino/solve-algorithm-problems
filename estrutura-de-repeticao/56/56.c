#include<stdio.h>
#include<stdlib.h>

main(){
	int num;
	int i = 1;
	
	do{
		printf("Digite um valor para montar a sua tabuada: ");
		scanf("%d",&num);
		if((num<0) || (num>10)){
			printf("\nErro! Tente novamente o valor insirido nao deve ser menor do que 0 ou maior do que 10\n");
		}
	}while((num<0) || (num>10));
	
	printf("TABUADA DA CASA DOS %d\n",num);
	for(i; i<=10; i++){
		printf("%d x %d = %d\n",num, i, num*i);
	}
	
	printf("\n\n");
	system("pause");
}
