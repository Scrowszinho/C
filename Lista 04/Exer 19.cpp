#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,id,qtm = 0;
char mf;
float mes=0,mei=0,sa,phm=0,phf=0;

for(i=1;i<=20;i++){
	printf("Digite a idade: ");
	scanf("%i",&id);
	printf("Digite o seu sexo M/F : ");
	scanf(" %c",&mf);
	printf("Digite o seu salario: ");
	scanf("%f",&sa);
	mei+=id;
	mes+=sa;
	if(mf == 'M' || mf == 'm'){
	phm++;
	}
	else if(mf == 'F' || mf == 'f'){
	phf++;
	}
	 if(mf == 'F' || mf == 'f' && sa<500){
	qtm++;
	}
}
printf("Média salario do grupo: %.f",mes/20*100);
printf("\nMédia da idade do grupo: %.f",mei/20*100);
printf("\nPercentual do sexo masculino: %.f",phm*0.2);
printf("\nPercentual do sexo feminino: %.2f",phf*0.2);
printf("\nNúmero de mulheres com salário inferior a 500: %i",qtm);
}

