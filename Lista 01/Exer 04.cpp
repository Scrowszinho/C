#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b,c;
	printf("Qual o valor do dolar atual: ");
	scanf("%f", &a);
	printf("Qual o valor de dolares no cofre: ");
	scanf("%f", &b);
	c = a*b;
	printf("O valor de dolares hoje e de %0.02f\n", c);

	system("PAUSE");
}
