#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b;
	printf("Qual o valor do produto: ");
	scanf("%f", &a);
	b = a-(a*0.09);
	printf("O valor do produto com desconto e de %0.02f\n", b);

	system("PAUSE");
} 
