#include<stdio.h>
#include<stdlib.h>

main(){
	int i, valor, intervaloVerdadeiro,intervaloFalso;
	intervaloVerdadeiro = 0;
	intervaloFalso = 0;
	
	for(i = 1; i<=10; i++){
		printf("%d - Digite um valor: ",i);
		scanf("%d",&valor);
		
		if((valor>=10) && (valor <=20)){
			intervaloVerdadeiro+=1;
		}else{
			intervaloFalso+=1;
		}
		
	}
	
	printf("\n\nSao %d NUMERO(S) que estao no INTERVALO [10;20]\n",intervaloVerdadeiro);
	printf("\n\nSao %d NUMERO(S) que nao estao no INTERVALO [10;20]\n",intervaloFalso);
	system("pause");
}
