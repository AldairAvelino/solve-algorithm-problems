#include<stdio.h>
#include<stdlib.h>

main(){
	int i, valor, negativos;
	negativos = 0;
	for(i = 1; i<=10; i++){
		printf("%d - Digite um valor: ",i);
		scanf("%d",&valor);
		
		if(valor < 0){
			negativos+=1;
		}
		
	}
	
	printf("\n\nSao %d NUMERO(S) NEGATIVO(S)\n",negativos);
	system("pause");
}
