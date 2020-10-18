#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i, b = 0;
char c;
float cr = 0,cl = 0, mp = 0, p;
for(i = 0; i<=45; i++){
printf("Qual a cor dos cabelos (L – louros, R – ruivos, P - preto ou C – castanhos):");
scanf(" %c", &c);
printf("Qual seu peso: ");
scanf("%f", &p);
if (p > mp){mp = p;}
if (c == 'R'){cr++;}
if	(c == 'L'){cl++;}
if (p>60 && c!='P'){mp++;}
}
printf("\nMaior Peso: %.2f",mp);
printf("\nPorcentagem de cabelos ruivos: %.2f",cr/45);
printf("\nPorcentagem de cabelos louros: %.2f",cl/45);
printf("\nQuantidade de pessoas com mais de 60 Kg que não possui cabelos Pretos: %.2f",mp);


}

