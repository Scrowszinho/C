#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p,i;
printf("Digite a altura da parede em centimentros: ");
scanf("%f",&a);
printf("Digite o comprimento da parede em centimentros: ");
scanf("%f",&p);
i = ((a/60)*(p/20))/2.5;

printf("Total de tijolos a ser utilizado: %0.02f",i);



}

