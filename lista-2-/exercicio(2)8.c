#include <stdio.h>

int main () {
	int ano;
	int subtracao;
	
	printf("Qual o seu ano de nascimento? ");
	scanf("%d", &ano);
	
	subtracao = 2023 - ano;
	
	printf("Voce fara: %d", subtracao);
	
	return 0;
	
	
	
}