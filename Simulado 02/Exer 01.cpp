#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
float v,ia,ib,m = 0,a = 0;
printf("Digite o valor do investimento: ");
scanf("%f", &v);
ia = v;
ib = v;
do{
ia= ia*1.0065;
ib = ib*1.0088;	
m = ib-ia;	
a++;	
}while(m<1000);
printf("Quantidade de meses: %.f",a);

}

