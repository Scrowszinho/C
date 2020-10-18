#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,b,c,d;
printf("Digite o preco do veiculo: ");
scanf("%f",&a);
b = a*0.3;
c = a*0.23;
d = a+b+c;
printf("\nPorcentagem do distribuidor:R$ %.2f",b);
printf("\nPorcentagem do imposto:R$ %.2f",c);
printf("\nPreco final:R$ %.2f",d);
}


