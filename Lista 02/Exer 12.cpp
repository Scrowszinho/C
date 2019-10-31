#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,b;
char ca;
printf("Qual sua area: p - Produção ou a - Administrativa :");
scanf(" %c",&ca);
printf("Qual seu salario :");
scanf("%f",&a);
if(ca == 'p'){
	if(a<701){
		b = a*1.15;
		printf("Salario reajustado: R$ %0.2f",b);
	} else if(a>700 || a<1801){
		b = a*1.1;
		printf("Salario reajustado: R$ %0.2f",b);
	} else if(a>1800 || a<2500){
		b = a*1.07;
		printf("Salario reajustado: R$ %0.2f",b);
	} else {
		printf("Salario sem reajuste: R$0.2f",a);
	}
}
else if(ca == 'a'){
	if(a<701){
		b = a*1.18;
		printf("Salario reajustado: R$ %0.2f",b);
	} else if(a>700 || a<1801){
		b = a*1.12;
		printf("Salario reajustado: R$ %0.2f",b);
	} else if(a>1800 || a<2500){
		b = a*1.08;
		printf("Salario reajustado: R$ %0.2f",b);
	} else {
			b = a*1.05;
		printf("Salario reajustado: R$ %0.2f",b);
	}
}


}

