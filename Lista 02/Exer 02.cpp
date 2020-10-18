#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {

int a;
printf("Digite o numero: ");
scanf("%i",&a);
if(a%10 == 0 ){
	printf("Numero divisivel por 10\n");
}
if (a%5 == 0 ){
	printf("Numero divisivel por 5\n");
}
if (a%2 == 0){
	printf("Numero divisivel por 2\n");
}


}

