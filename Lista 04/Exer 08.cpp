#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,b = 0;
for(i=1;i<=10;i++){
	printf("Digite um número: ");
	scanf("%i",&b);
	printf("Dobro do número digitado %i \n",b*b*b);
}
}

