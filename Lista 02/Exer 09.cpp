#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a, b, c;

printf("Digite a velocidade maxima permitida na avenida: ");
scanf("%f",&a);
printf("Digite a velocidade do motorista: ");
scanf("%f",&b);
c = b-a;
if( c <= 10){
	printf("Voce excedeu a velocidade em %0.1f Km/H e pagou 50 reais",c);
}
else if( c > 10 && c<30){
	printf("Voce excedeu a velocidade em %0.1f Km/H e pagou 100 reais",c);
}
else{
	printf("Voce excedeu a velocidade em %0.1f Km/H e pagou 200 reais",c);
}

}

