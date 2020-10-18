#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i;
float b = 0;
for(i=1;i<=20;i++){
	printf("%i , ",i);
	b=b+(i/2);
}
printf("\n Soma da metade dos números: %.f",b);
}

