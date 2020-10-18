#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b;
	printf("Qual o valor da aplicacao: ");
	scanf("%f", &a);
	b = (a*0.075)+a;
	printf("O valor da aplicacao com acrescimo e de %0.02f\n", b);

	system("PAUSE");
}
