#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float a,b,c;
printf("Digite a primeira nota: ");
scanf("%f",&a);
printf("Digite a segunda nota: ");
scanf("%f",&b);
c = (a+b)/2;
if(c<4){
	printf("Media: %.2f",c);
	printf("\nAluno Reprovado");
}
else if(c>=4 && c<6){
	printf("Media: %.2f",c);
	printf("\nAluno de Recuperacao");
}
else{
	printf("Media: %.2f",c);
	printf("\nAluno Aprovado");
}

}


