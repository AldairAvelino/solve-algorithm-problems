#include<stdio.h>
#include<stdlib.h>

main(){
	int numMacasCompradas;
	float custoTotalCompra;
	
	printf("Digite o numero total de macas compradas: ");
	scanf("%d",&numMacasCompradas);
	
	if(numMacasCompradas < 12){
		custoTotalCompra = numMacasCompradas * 1.30;
		printf("O custo total das compras e = %.2f\n", custoTotalCompra);
	}else{
		if(numMacasCompradas >= 12){
			custoTotalCompra = numMacasCompradas * 1.00;
			printf("O custo total das compras e = %.2f\n", custoTotalCompra);
		}
	}
	
	system("pause");
}
