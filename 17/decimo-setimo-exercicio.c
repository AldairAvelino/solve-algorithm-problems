#include<stdio.h>
#include<stdlib.h>

main(){
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2) / 2;
	if(media >= 6){
		printf("Aluno aprovado");
		printf("\nMedia = %.2f valores\n", media);
	}else{
		printf("Aluno nao aprovado");
		printf("\nMedia = %.2f valores\n", media);
	}
	
	system("pause");
}
