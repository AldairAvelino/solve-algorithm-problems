#include<stdio.h>
#include<stdlib.h>

main(){
	float nota1, nota2, nota3, mediaFinal;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&nota3);
	
	mediaFinal = ((nota1*2) + (nota2*3) + (nota3*5)) / 10;
	printf("A media final e = %.2f\n", mediaFinal);
	
	system("pause");
}
