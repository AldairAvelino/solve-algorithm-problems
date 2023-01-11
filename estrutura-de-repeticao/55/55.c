#include<stdio.h>
#include<stdlib.h>

main(){
	int n = 8;
	int i;
	
	printf("TABUADA DA CASA DOS 8\n");
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n",n, i, n*i);
	}
	
	printf("\n\n");
	system("pause");
}
