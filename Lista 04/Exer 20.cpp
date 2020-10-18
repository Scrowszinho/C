#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,mf,vo;
float m = 0,f = 0,vb = 0,br = 0,vot = 0;
for(i=1;i<=20;i++){
	printf("1-Masculino, 2-Feminino\nQual seu genero: ");
	scanf("%i",&mf);
	printf("1 –Ótimo, 2 –Bom, 3 –Regular, 4 –Ruim\nQual sua avaliacao: ");
	scanf("%i",&vo);
	if(mf == 1){
		m++;
	}else if(mf == 2){
		f++;
	}
	if(vo == 1 || vo == 2){
	vb++;
	} else if(vo == 3 || vo == 4){
	br++;
	}
	if(mf == 1 && vo == 1){
		vot++;
	}
}
	printf("\nPercentual dos Votos ótimos ou bons: %.2f",vb*20/100);
	printf("\nPercentual dos Votos regulares ou ruins: %.2f",br*20/100);
	printf("\nPercentual de homens : %.2f",m*20/100);
	printf("\nPercentual de mulheres: %.2f",f*20/100);
	printf("\nMulheres que votaram em ótimo: %.f",vot);
}

