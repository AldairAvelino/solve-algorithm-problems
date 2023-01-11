#include<stdio.h>
#include<stdlib.h>

main(){
	float nota1, nota2, media;
	do{
		printf("Digite o valor da primeira nota: ");
		scanf("%f",&nota1);
		if((nota1<0) || (nota1>10)){
			printf("\nPrimeira Nota INVALIDA!! Insira novamente\n");
		}
	}while((nota1<0) || (nota1>10));
	
	do{
		printf("\nDigite o valor da segunda nota: ");
		scanf("%f",&nota2);
		if((nota2<0) || (nota2>10)){
			printf("\nSegunda Nota INVALIDA!! Insira novamente\n");
		}
	}while((nota2<0) || (nota2>10));
	
	media = (nota1 + nota2) / 2;
	printf("\nA Media = %.1f valores\n",media);
	
	system("pause");
}
