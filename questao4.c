/* Faça um programa em C, que receba três valores. Se o primeiro valor for igual a zero, some 10, caso contrário o valor permanecerá o mesmo. O segundo valor se for maior que 10 deverá ser multiplicado por 2, caso contráio deverá ser somado a 10. Depois faça a soma dos três valores. */


#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int val1;
	int val2;
	int val3;

	puts("-----Bem vindo----- \n \n");
	
	printf("Digite o valor 1: ");
	scanf("%i", &val1);

	printf("Digite o valor 2: ");
	scanf("%i", &val2);

	printf("Digite o valor 3: ");
	scanf("%i", &val3);

	if (val1 == 0) {
		val1 += 10;
	}
	else {
		
	}
	if (val2 > 10){
		val2 *= 2;
	}
	else{
		
	}
	printf("Soma: %i ", val1+val2+val3);
}