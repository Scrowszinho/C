#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,p,i,d;
printf("Digite o número de apartamentos do hotel: ");
scanf("%f",&a);
printf("Digite o valor da diária por apartamento : ");
scanf("%f",&p);
i = p-(p*0.25);
printf("Valor promocional da diaria: %0.02f",i);
d = i*a;
printf("\nValor total a ser arrecado com 100pc da lotacao: %0.02f",d);
d = i*(a*0.70);
printf("\nValor total a ser arrecado com 70pc da lotacao: %0.02f",d);
d = (a*p)*0.25;
printf("\nValor deixado de ser arrecadado com 100pc da lotacao: %0.02f",d);




}


