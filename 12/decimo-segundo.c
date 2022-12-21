#include<stdio.h>
#include<stdlib.h>

main(){
	float  fahrenheit, celsius;
	
	printf("Digite o valor da temperatura em Fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius = ((fahrenheit-32) / 9) * 5;
	
	printf("%.2f Fahrenheit corresponde a %.2f Celsius\n", fahrenheit, celsius);
	
	system("pause");
}
