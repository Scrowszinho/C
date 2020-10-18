#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,b = 0;
for(i=1;i<=20;i++){
	printf("%i , ",i);
	b+=i;
}
printf("\n Soma de todos os números: %i",b);
}

