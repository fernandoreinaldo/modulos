//4- Elabore uma sub-rotina/Módulo que receba um valor inteiro e verifica se ele é positivo ou negativo e retorna 1 se ele é positivo e 0(zero) se ele for negativo.
//Imprima no main a frase "Valor é positivo" ou "Valor é negativo". 
//Desenvolva de 2 formas - uma com return e outra com passagem por Referência.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int modulo(int num1);

main(void){
	int num, rec;
	do{
		printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	rec = modulo(num);
	if(rec == 0){
		printf("\nO numero digitado eh negativo");
	} else if (rec == 1){
		printf("\nO numero digitado eh positivo");
	}
	} while (num = 0);
}

int modulo(int num1){
	if (num1 > 0){
		return 1;
	} else if (num1 < 0){
		return 0;
	}
}
