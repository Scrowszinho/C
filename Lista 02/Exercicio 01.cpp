#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

float a,b,c;
printf("Digite o primeiro numero: ");
scanf("%f",&a);
printf("Digite o segundo numero: ");
scanf("%f",&b);
if(a == b){
c = a + b;
printf("Soma entre os dois números: %0.02f",c);
}
else{
c = a * b;
printf("Multiplicacao entre os dois numeros: %0.02f",c);
}


}

