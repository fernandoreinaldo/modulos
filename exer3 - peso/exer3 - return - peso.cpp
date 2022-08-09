//3. Crie uma sub-rotina/módulo que receba como parâmetro a altura e o sexo de uma pessoa e retorne o seu peso ideal.  
//Desenvolva de 2 formas - uma com return e outra com passagem por Referência.
//Para HOMENS, deverá calcular o peso ideal usando a Fórmula peso_ideal = 72.7 * altura - 58
//Para as MULHERES, deve calcular o peso ideal usando a Fórmula peso_ideal = 62.1 * altura - 44.7

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float peso(float x, char y);

main(void){
	float altura, rec;
	char sexo;
	
	printf("\nDigite a sua altura mm: ");
	scanf("%f", &altura);
	
	printf("\nDigite o seu sexo, sendo M para masculino e F para feminino: ");
	scanf("%s", &sexo);
	rec = peso(altura,sexo);
	printf("\nO seu peso ideal eh: %f", rec);
}

float peso(float x, char y){
	float pesoideal;
	
	if(y == 'M'){
		pesoideal = ((72.7 * x)- 58);
		return pesoideal;
	} else if (y == 'F'){
		pesoideal = ((62.1 * x)- 47);
		return pesoideal;
	}
}
