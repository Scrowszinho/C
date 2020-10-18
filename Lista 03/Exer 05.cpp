
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int b = 0,a = 0,c = 0;

printf("Digite um número:");
scanf("%i",&a);
while(b <= 10){
c = a*b;
printf("\n%i x %i = %i ",a,b,c);
b++;
}
}


