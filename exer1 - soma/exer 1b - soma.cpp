//2.3 Fa�a uma sub-rotina/modulo que receba um n�mero inteiro positivo N como Par�metro e retorne a soma dos N�meros inteiros entre o n�mero 1 e o N (inclusive).//

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
