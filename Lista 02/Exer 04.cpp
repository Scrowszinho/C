#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

char mf;
float a,p,b;
printf("Qual seu genero: m - masculino , f - feminino: ");
scanf("%c",&mf);
printf("Qual seu peso em kg: ");
scanf("%f",&p);
printf("Qual sua altura: ");
scanf("%f",&a);
if(mf == 'm'){
b =  (72.7*a)-58;
if (p > b){
printf("Peso acima do ideal");
} 
else{
	printf("Peso normal ou Abaixo do Ideal");
}
	} 

else if(mf == 'f'){
b =   (62.1*a)-44.7;
if (p > b){
printf("Peso acima do ideal");
} 
else{
	printf("Peso normal ou Abaixo do Ideal");
}
}





}

