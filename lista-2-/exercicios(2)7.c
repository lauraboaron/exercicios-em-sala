#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int num, sim, nao, texto, result, parabens, pena;
	
	
	printf("Digite um numero aleatorio entre 1 e 10: ");
	scanf("%d", &num);
	
	srand(time(NULL));
	printf("Numero aleatorio: %d\n", rand () % 10);		

	printf ("Voce acertou o numero aleatorio? ");
	scanf("%d", &texto);
	
	if(texto == sim)
	{
		printf("parabens");	
	}
	else if(texto == nao)
	{
		printf("que pena");
	}

	
	return 0;
	
}


	