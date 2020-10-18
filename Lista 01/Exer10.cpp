#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,s,v;
printf("Digite seu numero de vendedor(a): ");
scanf("%f",&a);
printf("Digite seu salario fixo: ");
scanf("%f",&s);
printf("Digite suas vendas: ");
scanf("%f",&v);
v = s+(v*0.05);
printf("Numero de vendedora: %0.0f\nSalario a ser pago: R$%0.02f",a,v);


}

