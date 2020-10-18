#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float p,t;
int c;
printf("Digite sua altura em metros: ");
scanf("%f",&t);
printf("Digite seu peso em quilos: ");
scanf("%f",&p);
c = p/(t^2);
if (c<20){
	printf("Abaixo do peso ideal");
} 
else if (c>=20 && c<25){
	printf("Peso normal");
} 
else if (c>=25 && c<30){
	printf("Excesso de peso");
}
else if (c>=30 && c<35){
	printf("obesidade");
} 
else {
	printf("Obesidade morbida");
}
 


}

