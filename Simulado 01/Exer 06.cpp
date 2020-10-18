#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
char a;
int b;
float c;
printf("Qual o pacote: ");
scanf(" %c",&a);
printf("Digite a quantidade: ");
scanf("%i",&b);
switch (a)
{
   case 't':
     if(b<=4){
     	c=b*150;
     	printf("Valor final: R$ %.2f",c);
	 } else if(b>5 && b<=8){
     	c=b*130;
     	printf("Valor final: R$ %.2f",c);
	 }else{
	 	c=b*125;
     	printf("Valor final: R$ %.2f",c);
	 }
   break;

   case 's':
   	if(b<=4){
     	c=b*170;
     	printf("Valor final: R$ %.2f",c);
	 } else if(b>5 && b<=8){
     	c=b*165;
     	printf("Valor final: R$ %.2f",c);
	 }else{
	 	c=b*155;
     	printf("Valor final: R$ %.2f",c);
	 }
	    break;
	case 'c':
		if(b<=4){
     	c=b*200;
     	printf("Valor final: R$ %.2f",c);
	 } else if(b>5 && b<=8){
     	c=b*180;
     	printf("Valor final: R$ %.2f",c);
	 }else{
	 	c=b*175;
     	printf("Valor final: R$ %.2f",c);
	 }
		   break;

   default :
     printf("Pacote invalido");
	break;
}

	
}

