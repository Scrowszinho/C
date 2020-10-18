#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,n;
float h=1;
	printf("Digite o N: ");
	scanf("%i",&n);
for(i=1;i<=h;i++){
	h+=(1/i);
}
printf("Resultado de H: %.f",h);


}

