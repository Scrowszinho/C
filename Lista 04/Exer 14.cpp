#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,n,h=0;

for(i=1;i<=10;i++){
	printf("Digite o n�mero: ");
	scanf("%i",&n);
	if(n>30){
		h++;
	}
}
printf("N�meros maiores que 30: %i",h);


}

