#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,m=0,me=100000,b;
for(i=1;i<=10;i++){
	printf("Escreva um numero: ");
	scanf("%i", &b);
	if(b>m){
		m = b;
	}
	else if(me>b){
		me = b;
	}
}
printf("\n Maior número: %i",m);
printf("\n Menor número: %i",me);
}

