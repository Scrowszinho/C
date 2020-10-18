#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,b;
char c;
printf("Qual o valor do produto: ");
scanf("%f",&a);
printf("Qual o tipo do produto: Limpeza – L Alimentação - A Vestuário - V : ");
scanf(" %c",&c);
if( c == 'L'){
	if(a<100){
	b = a*0.05;
	printf("Valor do imposto:R$ %0.2f ",b);
	}	
	else if(a>=100 || a<500){
	b = a*0.04;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		
	else{
	b = a*0.02;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		

}
if( c == 'A'){
	if(a<100){
	b = a*0.03;
	printf("Valor do imposto:R$ %0.2f ",b);
	}	
	else if(a>=100 || a<500){
	b = a*0.02;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		
	else{
	b = a*0.01;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		

}

if( c == 'V'){
	if(a<100){
	b = a*0.07;
	printf("Valor do imposto:R$ %0.2f ",b);
	}	
	else if(a>=100 || a<500){
	b = a*0.06;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		
	else{
	b = a*0.04;
	printf("Valor do imposto:R$ %0.2f ",b);
	}		

}






}


