#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p;
printf("Digite a distancia a ser percorrida (Km/H): ");
scanf("%f",&a);
printf("Digite a sua velocidade por hora: ");
scanf("%f",&p);
p = a/p;
printf("Tempo medio(em horas) pra ser percorrido: %0.02f",p);



}

