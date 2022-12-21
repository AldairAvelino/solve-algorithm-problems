#include<stdio.h>
#include<stdlib.h>

main(){
	int horasInicio, horasFim, duracaoJogoHoras;

	printf("Digite a hora do inicio da Partida: ");
	scanf("%d",&horasInicio);
	
	printf("Digite a hora do termino da partida: ");
	scanf("%d",&horasFim);
	
	if((horasInicio <=24) && (horasFim <= 24)){
		if(horasInicio >= horasFim){
			duracaoJogoHoras = ( 24 - horasInicio) + horasFim;
			printf("Duracao de %d horas\n",duracaoJogoHoras);
		}else{
			duracaoJogoHoras = horasFim - horasInicio;
			printf("Duracao de %d horas\n",duracaoJogoHoras);
		}
	}else{
		printf("Erro!! A quantidade de cada hora nao pode ser maior do que 24h\n");
	}
	
	system("pause");
}
