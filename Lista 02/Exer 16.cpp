#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int a;
float b,c;
printf("1 � Calcular �rea da circunfer�ncia\n2 � Per�metro da circunfer�ncia : ");
scanf("%i",&a);

switch (a)
{
   case 1:
	printf("Digite o raio: ");
	scanf("%f",&b);
     c = (b*b)*(3.14159);
     printf("Area da circunferencia : %.2f",c);
   break;

   case 2:
   	printf("Digite o raio: ");
	scanf("%f",&b);
     c = 2*(b)*(3.14159);
     printf("Per�metro circunfer�ncia : %.2f",c);
   break;
   default :
    printf ("Valor invalido!\n");
}



}

