#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um Número qualquer: ");
	int num;
	scanf("%d",&num);
	if(num>10){
		printf("É MAIOR QUE 10!\n");
	}else{
		printf("NÃO É MAIOR QUE 10!\n");
	}
	system("pause");
}
