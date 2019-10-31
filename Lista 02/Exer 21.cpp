#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
float ht,vr,inss,irpf,sl,sb;
printf("Digite as horas de trabalhadas:");
scanf("%f",&ht);
printf("Digite o valor da hora:");
scanf("%f",&vr);
sb = ht*vr;
if(sb<=868.29){
	inss = sb*0.0765;
} else if(sb>=868.30 && sb<=1447.14){
	inss = sb*0.08;
}
else if(sb>=1447.15 && sb<=2894.28){
	inss = sb*0.09;
} else{
		inss = sb*0.11;
}

if(sb<=1499.15){
	irpf = ((sb-inss)*1)-0;
} else if(sb>1499.15 && sb<=3743.19){
	irpf = ((sb-inss)*0.15)-224.87;
} else{
irpf = ((sb-inss)*0.275)-561.02;	
}

sl = sb-(inss+irpf);
printf("Salario bruto: R$ %0.2f",sb);
printf("\nINSS: R$%0.2f",inss);
printf("\nIRPF: R$%0.2f",irpf);
printf("\nSalario liquido: R$%0.2f",sl);





}

