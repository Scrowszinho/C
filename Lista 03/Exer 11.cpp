#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int a = 0,b = 1,c = 1;
while(b != 10 ){
if(b % 2 == 0){
}	else{

printf("%i x ",b);
c = c*b;

}
c = 1;
b++;
printf("= %i\n",c);
}

}

