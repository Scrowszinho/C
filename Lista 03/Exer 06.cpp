#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int a = 1000;
while(a <= 1999 ){
if( a%11 == 5){

printf("%i \n",a);
	
}
	a++;
}

}


