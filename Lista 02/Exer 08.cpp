#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float p,pl,a;
printf("Digite o seu peso na terra: ");
scanf("%f",&p);
printf("1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\n Digite: ");
scanf("%f",&pl);
if (pl == 1){
a = p*0.37;
printf("Seu peso em Mercurio e de: %0.2f",a);
}
else if (pl == 2){
a = p*0.88;
printf("Seu peso em Venus e de: %0.2f",a);
}
else if (pl == 3){
a = p*0.38;
printf("Seu peso em Marte e de: %0.2f",a);
}
else if (pl == 4){
a = p*2.64;
printf("Seu peso em Jupiter e de: %0.2f",a);
}
else if (pl == 5){
a = p*1.15;
printf("Seu peso em Saturno e de: %0.2f",a);
}

}
