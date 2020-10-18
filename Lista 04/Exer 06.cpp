#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");
int i;
for(i=1;i<=500;i++){
	if(i%5==0){
	printf("%i , ",i);
}
}


}

