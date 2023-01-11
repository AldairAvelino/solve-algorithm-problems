#include<stdio.h>
#include<stdlib.h>

main(){
	int i, valorX, valorY, somaInteirosNoIntervalo;
	somaInteirosNoIntervalo = 0;
	
	printf("Digite o primeiro valor: ");
	scanf("%d",&valorX);
	
	printf("Digite o segundo valor: ");
	scanf("%d",&valorY);
		
	for(i=valorX+1; i<valorY; i++){
		somaInteirosNoIntervalo+=i;
	}
	printf("\n\nA SOMA ENTRE OS VALORES do INTERVALO entre [%d;%d] e = %d\n",valorX, valorY, somaInteirosNoIntervalo);
	system("pause");
}
