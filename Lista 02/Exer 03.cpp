#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

float a,b,c,d;
printf("Digite o salario: ");
scanf("%f",&a);
printf("Digite o valor da prestacao: ");
scanf("%f",&b);
c = a*b/100;
d= a*0.30;
if (c > d ){
printf("Emprestimo nao concedido");
} else{
	printf("Emprestimo concedido");
}


}

