#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int b = 0,a = 0,ma=0,me=10000;
float med = 0;
while(a <= 500 ){
	printf("Digite um n�mero: ");
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
printf("\nMaior n�mero: %i",ma);
printf("\nMenor n�mero: %i",me);
printf("\nM�dia: %.2f",med);
}


