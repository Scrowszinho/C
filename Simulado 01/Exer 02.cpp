#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
int a,b;
printf("Digite o numero a: ");
scanf("%i",&a);
printf("Digite o numero b: ");
scanf("%i",&b);
if(a == b){
	printf("Numeros iguais");
}
else{
	if(a>b){
		printf("Numeros diferentes\n");
		printf("%i,%i",b,a);
	}else{
		printf("Numeros diferentes\n");
		printf("%i,%i",a,b);
	}
	
}
}
