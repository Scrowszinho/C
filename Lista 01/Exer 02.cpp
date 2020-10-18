#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
	float a,b;
	printf("Qual o valor da compra: ");
	scanf("%f", &a);
	b = a/5;
	printf("O valor de cada prestacao e %0.02f\n", b);

	system("PAUSE");
}
