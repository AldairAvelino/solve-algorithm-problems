#include<stdio.h>
#include<stdlib.h>

main(){
	int ano_actual, ano_nascimento;
	
	printf("Digite o ano actual: ");
	scanf("%d",&ano_actual);
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nascimento);
	
	int idade;
	if(ano_actual > ano_nascimento){
		idade = ano_actual - ano_nascimento;
		if(idade >= 18){
			printf("A pessoa pode votar\n");
		}else{
			printf("A pessoa nao pode votar\n");
		}
	}
	
	system("pause");
}
