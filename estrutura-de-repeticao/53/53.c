#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	
	printf("Digita um valor: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("\n\nErro o valor nao pode ser menor ou igual a 0");
	}else{
		if((n>0) && (n<3)){
			printf("Nao tem Nenhum Numero entre 1 e %d",n);
		}else{
			printf("\nOs Numeros inteiros entre 1 e %d sao:\n",n);
			for(n-=1; n>1; n--){
				printf("%d\n",n);
			}
		}
	}
	
	printf("\n\n");
	system("pause");
}
