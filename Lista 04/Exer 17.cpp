#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i,n1,n2,n3;
float me=0;
for(i=1;i<=50;i++){
	printf("Digite a primeira nota do aluno: ");
	scanf("%i", &n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%i", &n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%i", &n3);
	me = (n1+n2+n3)/3;
	printf("\nAluno:%i\nMédia Final:%.2f\n\n",i,me);
	
}


}

