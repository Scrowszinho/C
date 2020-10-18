#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,b;
printf("Digite o total de faltas : ");
scanf("%f",&a);
printf("Digite a nota do aluno : ");
scanf("%f",&b);
if(a<=10){
	if(b>=9){
	printf("Nota : A");	
	} else 	if(b<9 || b>=7.5){
	printf("Nota : B");	
	}
	 else 	if(b<7.5 || b>=5){
	printf("Nota : C");	
	}
	else 	if(b<5 || b>=4.9){
	printf("Nota : D");	
	}else{
	printf("Nota : E");	
	}	
}
else{
	if(b>=9){
	printf("Nota : B");	
	} else 	if(b<9 || b>=7.5){
	printf("Nota : C");	
	}
	 else 	if(b<7.5 || b>=5){
	printf("Nota : D");	
	}
	else 	if(b<5 || b>=4.9){
	printf("Nota : E");	
	}else{
	printf("Nota : E");	
	}
}




}

