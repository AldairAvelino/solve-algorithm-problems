#include<stdio.h>
#include<stdlib.h>

main(){
	int eleitores, totalEleitores, votosBrancos, votosNulos, votosValidos;
	printf("Digite o total de eleitores: ");
	scanf("%d",&totalEleitores);
	
	if(totalEleitores<=0){
		printf("Nao se pode achar o percentual dos votos\n");
	}else{
		if(totalEleitores>=1){
			printf("Digite o total de Votos Brancos: ");
			scanf("%d",&votosBrancos);
			if(votosBrancos>totalEleitores){
				printf("Erro!! Tem mais Votos Branco do que eleitores\n");
				votosBrancos = 0;
			}else{
				eleitores = totalEleitores - votosBrancos;
				//printf("\n%d\n",eleitores);
			}
			
			if(eleitores>0){
				printf("Digite o total de Votos Nulos: ");
				scanf("%d",&votosNulos);
				if(votosNulos>eleitores){
					printf("Erro!! Tem mais Votos Nulos do que eleitores\n");
					votosNulos = 0;
				}else{
					eleitores = eleitores - votosNulos;
					//printf("\n%d\n",eleitores);
				}
				
				if(eleitores>0){
					printf("Digite o total de Votos Validos: ");
					scanf("%d",&votosValidos);
					if(votosValidos>eleitores){
						printf("Erro!! Tem mais Votos Validos do que eleitores\n");
						votosValidos = 0;
						eleitores = 0;
					}else{
						eleitores = eleitores - votosValidos;
						//printf("\n%d\n",eleitores);
					}
				}
			}
		}
	}
	
	float percentualVotosBrancos,percentualVotosNulos, percentualVotosValidos;
	percentualVotosBrancos = (100*votosBrancos) / totalEleitores;
	percentualVotosNulos = (100*votosNulos) / totalEleitores;
	percentualVotosValidos = (100*votosValidos) / totalEleitores;
	
	printf("\nTotal de Eleitores: %d",totalEleitores);
	printf("\nPercetagem de votos Brancos: %.1f%%",percentualVotosBrancos);
	printf("\nPercetagem de votos Nulos: %.1f%%",percentualVotosNulos);
	printf("\nPercetagem de votos Validos: %.1f%%\n\n",percentualVotosValidos);
	
	if(eleitores>0){
		printf("\n\n\nNem todos os eleitores Votarm");
		printf("\nEstao faltando %d eleitores para votarem\n\n\n", eleitores);
	}
	
	system("pause");
}
