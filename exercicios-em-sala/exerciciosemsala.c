#include <stdio.h>
#include <stdlib.h>

int main (){
	int num, num2;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%d%d", &num, &num2);
	
	if(num == 5){
		printf("\n5");
		}
	if(num2 == 10){
		printf("\n10");	
		}
	if(num2 > num){
		printf("\nO numero menor e: %d", num);
		}

	
	return 0;
	
}