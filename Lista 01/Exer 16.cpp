#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p,i,d;
printf("Digite o valor do salario minimo: ");
scanf("%f",&a);
printf("Digite a quantidade de quilowatts consumida: ");
scanf("%f",&p);
i = a*0.005;
printf("Valor do quilowatts: %0.02f",i);
d = (a*0.005)*p;
printf("\nValor do quilowatts a ser pago pela residencia: %0.02f",d);
i = d-(d*0.15);
printf("\nValor do quilowatts a ser pago pela residencia com 15 de desconto: %0.02f",i);



}


