#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	
	char texto[250];
	int tamanho;
	
	puts ("Escreva uma frase: "); // parametro é uma string, o printf e puts é uma funcao
	gets (texto); // se tivesse usado o printf, o fgets pode abranger mais, pode dar espaco
	
	tamanho = strlen(texto); // o strlen pede uma string tbm, para poder contar quantidades, no caso uma variavel
	printf("O numero de caracteres e: %d", tamanho);
	
	return 0;
	
		
	}
	
	
	
	





