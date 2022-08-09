//2.3 Faça uma sub-rotina/modulo que receba um número inteiro positivo N como Parâmetro e retorne a soma dos Números inteiros entre o número 1 e o N (inclusive).//

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int modulo(int num1);

main(void){
	int num, rec;
	
	do{
		printf("\nDigite um numero positivo: ");
		scanf("%d", &num);
	} while (num < 0);
	
	rec = modulo(num);
	printf("\nA soma eh %d: ", rec);
}

int modulo(int num1){
	int cont;
	for(cont = num1-1;cont>0;cont--){
		num1 = num1 + cont;
	}
	return num1;
}
