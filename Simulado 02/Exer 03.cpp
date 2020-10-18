#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
float i,a = 1, p,t,tt;
do{
printf("Quantidade de pessoas na escada: ");
scanf("%f",&p);	
i = p;
do{
printf("Qual o tempo que a pessoa número %.f: ",i);
scanf("%f",&t);
i++;		
}while(i<p);
	
}while(a = 0);


}

