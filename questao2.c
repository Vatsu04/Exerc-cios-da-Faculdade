/*Faça um programa em C, que receba uma lista com 20 idades. 
Apresente quantas idades são menores ou igual a cinco; quantas idades são acima de 50. Apresente ainda, a média das idades. (2,0) 

OBS: Para calcular a média das idades utilizar função

*/


#include <stdio.h>
#include <stdlib.h>
#define T 20

float media(int idades[]) {
  int sum = 0;
  for (int s = 0; s < T; s++) {
    sum += idades[s];
  }
	printf("Média das idades: %i ", sum / T);
  
	return 0;	
}
int main(void) {
	int idades[T];
  for (int i =0; i<T;i++){
	printf("Digite a idade da pessoa %i: ", i);
	  scanf("%i", &idades[i]);
		
		
	  }
	
	for (int s=0;s<T;s++){
		if(idades[s] <= 5) {
			printf("%d\n", idades[s]);
			}
		else if(idades[s] > 50)
			printf("%d\n", idades[s]);
		
	}
	
	media(idades);
	
	}


	
	

	
	