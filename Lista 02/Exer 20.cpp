#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int a,b,c;
printf("Digite o lado a: ");
scanf("%i",&a);
printf("Digite o lado b: ");
scanf("%i",&b);
printf("Digite o lado c: ");
scanf("%i",&c);
if (a+b>c || b+c>a ||c+a>b){
if (a == b && b == c){
printf("Triângulo do tipo Equilátero");	
}	
else if(a == b || b == c || c == a){
printf("Triangulo do tipo Isóscele");	
}
else if(a != b || b != c || c != a){
printf("Triangulo do tipo Escaleno");	
}
}


else{
	printf("Não é um triangulo");
}

 
 
}

