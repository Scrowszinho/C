#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p,imc;
printf("Digite sua altura em metros: ");
scanf("%f",&a);
printf("Digite seu peso em kg: ");
scanf("%f",&p);
imc = p/(a^2);
printf("Seu IMC e de: %0.02"+imc);

}

