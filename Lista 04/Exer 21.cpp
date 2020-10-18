#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,a,b,c;
printf("Digite o primeiro número: ");
scanf("%i",&a);
printf("Digite o segundo número: ");
scanf("%i",&a);
printf("%i , %i ,",a,b);
for(i=1;i<=10;i++){
	c = a+b;
	a = b;
	b = c;
	printf("%i , ",c);
}


}

