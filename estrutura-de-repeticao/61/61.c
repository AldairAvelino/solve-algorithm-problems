#include<stdio.h>
#include<stdlib.h>

main(){
	int i;
	float valor, media, totalValor;
	totalValor = 0;
	
	for(i = 1; i<=10; i++){
		do{
			printf("%d - Digite um valor: ",i);
			scanf("%f",&valor);
			if((valor<0) || (valor>20)){
				printf("\nErro!! O valor nao pode ser menor que 0 ou maior que 20. Insira novamente!\n");
			}
		}while((valor<0) || (valor>20));
		totalValor+=valor;
		media = totalValor / i;

	}
	printf("\nO valor da MEDIA ARITMETICA e = %.1f valores\n",media);
	system("pause");
}
