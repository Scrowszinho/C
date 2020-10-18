#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

float a = 0,b,c = 0;

while(a < 5 ){
printf("Digite um número:");
scanf("%f",&b);
if(b<0){
	c++;
}
a++;
}
printf("Total de números negativos digitados: %.f",c);
}


