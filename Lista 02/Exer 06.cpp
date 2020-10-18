#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float p,a;
printf("Digite quantos quilos de peixe voce trouxe: ");
scanf("%f",&a);
p = a-50;
if (a<=50){
printf("Peso dentro do regulamento.");
}
else{
p = p*4;
printf("Valor da multa a ser pago: R$ %0.2f",p);
}



}

