#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
	
	
	srand(time(NULL)); // o computador nao sabe gerar um numero aleatorio, ele faz um calculo com base no horario	
	printf ("Numero aleatorio: %d\n", rand () % 100); // % 100 limita numeros entre 0 a 99
	return 0;

	
}