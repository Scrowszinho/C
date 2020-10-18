#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b;
	printf("Digite o valor lado do quadrado: ");
	scanf("%f", &a);
	b = a*4;
	printf("Perimetro: %0.00f\n", b);
	b = a*a;
	printf("Area: %0.00f\n", b);	
	b = a*(2^(1/2));
	printf("Diagonal: %0.00f\n", b);


	system("PAUSE");
} 
