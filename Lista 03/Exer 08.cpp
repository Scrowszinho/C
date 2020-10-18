#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int b = 0,a = 0,ma=0,me=10000;
float med = 0;
while(a <= 500 ){
	printf("Digite um número: ");
	scanf("%i",&b);
if( b > ma){
ma = b;
}
if( b < me){
me = b;
}
med = med+b;
	a++;
}
med = med/a;
printf("\nMaior número: %i",ma);
printf("\nMenor número: %i",me);
printf("\nMédia: %.2f",med);
}


