#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b,c;
	printf("Qual o ano de nascimento: ");
	scanf("%f", &a);
	printf("Qual o ano atual: ");
	scanf("%f", &b);
	c = b-a;
	printf("Sua idade atual e de: %0.00f\n", c);
	c = 2028 - a;
	printf("Sua idade em 2028: %0.00f\n", c);
	system("PAUSE");
} 
