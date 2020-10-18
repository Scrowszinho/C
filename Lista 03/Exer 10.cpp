#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>
main() {
setlocale(LC_ALL,"");

int a = 0,b = 5,c = 1;
while(b != 0 ){
printf("%i x ",b);
c = c*b;
b--;

}
printf("= %i",c);
}

