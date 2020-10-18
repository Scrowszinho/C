#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
float v,ia,ib,m = 0,a = 0;
printf("Digite o número de habitantes: ");
scanf("%f", &v);
ia = v;
ib = v;
do{
ia= ia*1.0270;
ib = ib*1.0121;	
m = ia-ib;	
a++;	
}while(m<100000);
printf("Quantidade de anos: %.f",a);

}

