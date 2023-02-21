#include <stdio.h>
#include <stdlib.h>

int main (){
	int num, num2, num3;
	
	printf("Digite tres numeros: \n");
	scanf("%d %d %d", &num, &num2, &num3);
	
	if(num == num2 && num3){
		printf("Todos os numeros sao iguais");
		}
	else if(num != num2 != num3){
		printf("Todos os numeros sao diferentes");
	}
	if(num > num2 && num2 > num3){
		printf("\n%d %d %d", num3, num2, num);
	}
	if(num3 > num2 && num2 > num){
		printf("\n%d %d %d", num, num2, num3);
	}
	if(num2 > num && num > num3){
		printf("\n%d %d %d", num3, num, num2);
	}
	if(num3 > num && num > num2){
		printf("\n%d %d %d", num2, num, num3);
	}
	if (num2 > num3 && num3 > num){
		printf("\n%d %d %d", num, num3, num2);
	}
	if(num > num3 && num3 > num2){
		printf("\n%d %d %d", num2, num3, num);
	}
	
	return 0;
	
	
}

