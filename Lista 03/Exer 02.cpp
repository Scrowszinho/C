#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

float a = 0,c = 0;
int b=0;
while(a < 5 ){
printf("Digite um n�mero:");
scanf("%i",&b);
if( b%3 == 0){
	c++;
}
a++;
}
printf("Total de n�meros negativos digitados: %.f",c);
}


