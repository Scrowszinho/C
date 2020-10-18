#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

float a = 1,c = 0;
int b=0;
while(a != 0 ){
printf("Digite um número:");
scanf("%f",&a);
if( b%2 == 0){
	c = c + a;
	b++;
}
}
c = c/b;
printf("Média dos números digitados: %.f",c);
}


