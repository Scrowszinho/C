#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p,i,d;
printf("Digite quantos cigarros fuamdos por dia: ");
scanf("%f",&a);
printf("Digite o total de anos fumados: ");
scanf("%f",&p);
printf("Digite o preco da carteira: ");
scanf("%f",&d);
i = ((p*365*a)/20);

printf("Total de tijolos a ser utilizado: %0.02f",i);



}


