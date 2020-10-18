#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int a,b,i;
for(i=1;i<=15;i++){
	printf("Digite o valor a: ");
	scanf("%i", &a);
	printf("Digite o valor b: ");
	scanf("%i", &b);
	do{
	a++;
	printf("%i , ",a);
	}while(a<b);
	printf("\n");
}


}

