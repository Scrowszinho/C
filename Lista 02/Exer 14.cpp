#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

float a,b;
char ca;
printf("Qual sua escolha: a - abacaxi ou g - goiaba :");
scanf(" %c",&ca);
printf("Quantos quilos:");
scanf("%f",&a);
if(ca == 'a'){
if(a < 3){
b = a*1.9;
printf("Valor a ser pago: R$%0.2f",b);
} else if(a > 3 || a<6){
b = a*1.8;
printf("Valor a ser pago: R$%0.2f",b);
}else{
b = ((a*1.6)-(a*1.6*0.1));
printf("Valor a ser pago: R$%0.2f",b);
}
}
else if(ca == 'g'){
if(a < 3){
b = a*2.5;
printf("Valor a ser pago: R$%0.2f",b);
} else if(a > 2 || a<6){
b = a*2.4;
printf("Valor a ser pago: R$%0.2f",b);
}else{
b = ((a*2.2)-(a*2.2*0.1));
printf("Valor a ser pago: R$%0.2f",b);
}
}
	
}

