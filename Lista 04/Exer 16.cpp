#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,n;
float me=0,vp=0,vn=0;

for(i=1;i<=20;i++){
	printf("Digite o número: ");
	scanf("%i",&n);
	me+=n;
	if(n>0){
	vp++;
	}
	else{
		vn++;
	}
}
printf("Média: %.f",me/20);
printf("\nTotal de valores positivos: %.f",vp);
printf("\nTotal de valores Negativos: %.f",vn);
printf("\nPercentual de valores positivos: %.2f",vp*0.2);
printf("\nPercentual de valores Negativos: %.2f",vn*0.2);
}

