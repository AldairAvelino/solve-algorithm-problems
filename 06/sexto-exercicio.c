#include<stdio.h>
#include<stdlib.h>

main(){
	float base, altura, area_rectangulo;
	printf("Insira o valor da Base: ");
	scanf("%f",&base);
	printf("Insira o valor da Altura: ");
	scanf("%f",&altura);
	
	area_rectangulo = base*altura;
	printf("A area do Rectangulo e igual a %.2f", area_rectangulo);
	printf("\n");
	system("pause");
}
