#include<stdio.h>
#include<stdlib.h>

main(){
	int i, numAlunos;
	float notaAlunos, media, totalNotas;
	
	i = 1;
	totalNotas = 0;
	do{
		printf("Digite o numero de alunos na turma: ");
		scanf("%d",&numAlunos);
		if(numAlunos<1){
			printf("\n\nErro!! Numero de alunos na turma nao pode ser menor do que 1\n");
		}
	}while(numAlunos<1);
	
	while(i<=numAlunos){
		do{
			printf("Digite a nota do aluno (%d): ",i);
			scanf("%f",&notaAlunos);
			if((notaAlunos<0) || (notaAlunos>20)){
				printf("\n\nErro!! Nota nao pode ser menor do que 0 ou maior do que 20\n");
			}
		}while((notaAlunos<0) || (notaAlunos>20));
		totalNotas+=notaAlunos;
		i++;
	}
	
	media = totalNotas / (i-1);
	printf("\n\nA MEDIA ARITMETICA e = %.2f valores\n",media);
	system("pause");
}
