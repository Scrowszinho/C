#include <stdio.h> 	// Nesta linha voce ira
#include <stdlib.h> // incluir as bibliotes no programa
#include <math.h>	// para o programa funcionar corretamente.
main() {
	
	float a = 0,b = 0,c = 0;   // Criando as variaveis do tipo float(Numeros quebrados, por exemplo 0.12)
	printf("Qual a base do triângulo: "); //printf serve para escrever uma mensagem no console ou exibir o resultado 
	scanf("%f", &a); //scanf lê a linha a ser digitada, sempre comecar com %f, ou, %i(depende do tipo da variavel), 
	printf("Qual a altura do triângulo: "); //após isso ler com o & o nome da variavel
	scanf("%f", &b);
	c = (a*b)/2; // aqui sera feita a soma, geralmente, recomenda-se iniciar a variavel com 0, como feito na linha 6
	printf("Area do triangulo é igual a %0.02f\n", c); // Neste print ele exibe os resultados, declarando antes de fechar
	// as aspas duplas, " ", o tipo da variavel e com o 0.02 o numero de casas apos a virgula a ser exibida.
	// Após fechar aspas utilizar a virgula , para adecionar a variavel a ser exibida como resultado. 

	system("PAUSE"); 
}
