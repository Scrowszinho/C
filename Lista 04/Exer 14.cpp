#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,n,h=0;

for(i=1;i<=10;i++){
	printf("Digite o número: ");
	scanf("%i",&n);
	if(n>30){
		h++;
	}
}
printf("Números maiores que 30: %i",h);


}

