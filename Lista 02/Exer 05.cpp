#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
float pe,cp,a;
printf("Digite o Preco do produto: ");
scanf("%f",&pe);
printf("1 A vista em dinheiro ou cheque, com 10pc de desconto\n2 A vista com cartao de credito, com 5pc de desconto\n3 Em 2 vezes, preco normal de etiqueta sem juros\n4 Em 3 vezes, preço de etiqueta com acrescimo de 10pc \n");
scanf("%f",&cp);
if (cp == 1){
a = pe-(pe*0.1);
printf("Preço com 10pc de desconto: %0.2f",a);
}
else if (cp == 2){
a = pe-pe*0.05;
printf("Preço com 5pc de desconto: %0.2f",a);
}
else if (cp == 3){
a = pe/2;
printf("Preço em 2 vezes sem juros: %0.2f",a);
}
else if (cp == 4){
a = pe*1.1;
printf("Preço em 2 vezes com juros de 10pc: %0.2f",a);
}

}

