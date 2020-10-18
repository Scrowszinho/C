#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b;
	printf("Digite o raio de um circulo: ");
	scanf("%f", &a);
	b = (a*a)*3.14159;
	printf("Area do circulo: %0.00f\n", b);
	

	system("PAUSE");
} 
