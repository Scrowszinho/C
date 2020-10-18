#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i, b = 0,c;
float o1 = 0,o2 = 0,o3 = 0;
float m1 = 0, m2 = 0,m3 = 0;
char p;
for(i = 0; i<=45; i++){
printf("1- Santa Maria, 2- Pinta e 3 - Nina: ");
scanf("%i", &c);
printf("M- Matutino, V- Vespertino e N - Noturno: ");
scanf(" %c", &p);
if (c == 1){o1++;}
if (c == 2){o2++;}
if (c == 3){o3++;}
if (p == 'M'){m1++;}
if (p == 'V'){m2++;}
if (p == 'N'){m3++;}
}
printf("\nÔnibus 1: %.2f",o1/40);
printf("\nÔnibus 2: %.2f",o2/40);
printf("\nÔnibus 3: %.2f",o3/40);
if (p)


}

