#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	
	do{
		printf("Digita um valor: ");
		scanf("%d",&n);
		if(n==0){
			printf("\nErro!! Tenta novamente o valor nao pode ser 0\n");
		}
	}while(n==0);
	
	if((n>0) && (n<3)){
		printf("\nNao tem Nenhum Numero entre 1 e %d",n);
	}else{
		printf("\nOs Numeros inteiros entre 1 e %d sao:\n",n);
		for(n-=1; n>1; n--){
			printf("%d\n",n);
		}
	}
	
	printf("\n\n");
	system("pause");
}
