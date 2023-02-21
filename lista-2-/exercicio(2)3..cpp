#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int num, num2 , maior;
		
	srand (time(NULL));
	num=rand()%1000+10;
	num2=rand()%1000+10;
	
	printf("Numero aleatorio: %d\n", num);
	printf("Numero aleatorio: %d\n", num2);
	
	if( num > num2 ){
		printf("O numero maior e: %d", num );
		
	}
	else if( num < num2 ){
		printf("O numero maior e: %d", num2 );
	}
	
				

	return 0;
	
	
}



