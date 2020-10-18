#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

float a,b;
char ca;
printf("Qual sua escolha: a - Alcool ou g - Gasolina :");
scanf(" %c",&ca);
printf("Quantos litros:");
scanf("%f",&a);
if(ca == 'a'){
if(a < 16){
b = a*2;
printf("Valor a ser pago: R$%0.2f",b);
} else if(a > 15 || a<31){
b = a*1.95;
printf("Valor a ser pago: R$%0.2f",b);
}else{
b = a*1.8;
printf("Valor a ser pago: R$%0.2f",b);
}
}
else if(ca == 'g'){
if(a < 16){
b = a*2.9;
printf("Valor a ser pago: R$%0.2f",b);
} else if(a > 15 || a<31){
b = a*2.85;
printf("Valor a ser pago: R$%0.2f",b);
}else{
b = a*2.75;
printf("Valor a ser pago: R$%0.2f",b);
}
}
	
}

