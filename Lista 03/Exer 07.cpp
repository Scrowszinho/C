#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

float a = 1,c = 0,p1=0,p2=0,pn=0,pb=0;
int c1=0,c2=0,vn=0,vb=0;
printf("1,2= voto para os respectivos candidatos; 3= voto nulo; 4= voto em branco\n");

while(a != 0 ){
printf("Digite o número para o voto:");
scanf("%f",&a);
c++;
if(a == 1){
 	c1++;
}
else if(a == 2){
 	c2++;
}
else if(a == 3){
 	vn++;
}
else if(a == 4){
 	vb++;
}

}
p1 = 100*c1/c;
p2 = 100*c2/c;
pn = 100*vn/c;
pb = 100*vb/c;
printf("\nPercentual do Candidato 1: %.2f",p1);
printf("\nPercentual do Candidato 2: %.2f",p2);
printf("\nPercentual de votos nulos: %.2f",pn);
printf("\nPercentual de votos brancos: %.2f",pb);
}


