#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
char b;
float bh = 0,ba = 0,ha = 0,ht = 0;
while(b!='nao'){
printf("Digite o nome do comodo:");
scanf("%c",&b);
printf("Digite a base:");
scanf("%f",&ba);
printf("Digite a altura:");
scanf("%f",&ha);
bh = ha*ba;
printf("\nNome do comodo: %c\n¡rea: %.2f\n",b,bh);
ht = ht+bh;
}
printf("Area total: %.2f",ht);
}

