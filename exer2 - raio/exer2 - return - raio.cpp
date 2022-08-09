//2. Elabore uma sub-rotina/módulo que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal(main) o seu volume. 
//Desenvolva de 2 formas - uma com return e outra com passagem por Referência.
//Fórmula v= 4/3 * pi * raio3  

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float volume (float x);

main(void){
	float raio, rec;
	
	printf("\nDigite o raio de uma esfera: ");
	scanf("%f", &raio);
	rec = volume(raio);
	printf("\nO volume da esfera sera: %f", rec);
}

float volume (float x){
	float v;
	v = (4.0/3)*3.14*(x*x*x);
	
	return v;
}
