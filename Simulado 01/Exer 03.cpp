#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
char a;
int b;
float c;
printf("Qual o pacote: ");
scanf(" %c",&a);
printf("Digite a quantidade de convidados: ");
scanf("%i",&b);
switch (a)
{
   case 'a':
     if(b<=100){
     	c=b*100;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 } else if(b>100 && b<=200){
     	c=b*95;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }else{
	 	c=b*92;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }
   break;

   case 'b':
   	 if(b<=100){
     	c=b*90;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 } else if(b>100 && b<=200){
     	c=b*85;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }else{
	 	c=b*80;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }
	    break;
	case 'c':
		
   	 if(b<=100){
     	c=b*75;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 } else if(b>100 && b<=200){
     	c=b*72;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }else{
	 	c=b*69;
     	printf("Valor final da festa: R$ %.2f",c);
     	printf("\nParabens");
	 }
		   break;

   default :
     printf("Pacote invalido");
	break;
}

	
}

