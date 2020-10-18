#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,b;
printf("Escreva um número: ");
scanf("%i", &b);
for(i=1;i<=b;i++){

	if(i%2==0 && i%5==0){
		printf("%i , ",i);
	}	
}
}

