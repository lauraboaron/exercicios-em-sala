#include <stdio.h>

int main () {
	int num, num1;
	int soma;
	
	printf ("Digite dois numeros:\n");
	scanf ("%d%d", &num, &num1);
	
	soma = num + num1;
	
	printf ("\nO resultado da soma e: %d", soma);
		
	return 0;
	
}	