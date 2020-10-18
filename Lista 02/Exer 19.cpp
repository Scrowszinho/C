#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
float b = 0;
printf("Digite a idade do nadador : ");
scanf("%f",&b);
	if(b>4 && 8>b){
	printf("Categoria : Infantil A");	
	}
	 else 	if(b> 7 && 11>b){
	printf("Categoria : Infantil B");	
	}
	 else 	if(b> 10 && 14>b){
	printf("Categoria : Infanto Juvenil");	
	}
	else 	if(b> 13 && 18>b){
	printf("Categoria : Juvenil");	
	}else{
	printf("Categoria : Sênior");	
	}	
}

