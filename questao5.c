





/* Elaborar um programa em C que, receba a quantidade de venda de cada produto de acordo com a tabela, depois apresente a soma da quantidade das vendas realizadas de cada produto de acordo com a tabela.
Apresente o nome do produto e a soma das quantidades e o percentual trimestral de cada produto vendido.
A meta mês a mês 10 roldano/ 50 brocas/ 5 cunhas

Tabela:
_____________________________
		|		   Utilização
Recurso |____________________
		| Junho|Julho|Agosto |	
_____________________________|
Roldana |   3  | 11  |    2  |
_____________________________|
Broca   |  15  |  1  |   10  |
______________________________
Cunha   |   9  |  8  |    0  |
______________________________

Observações:

1. Obrigatório utilizar uma função para a cálculo do percentual de cada produto vendido mês a mês.

2. Obrigatório utilizar uma função para o cálculo do percentual de cada produto em relação a venda total dos 3 meses.

3. Obrigatório uilizar vetor (vetor ou matriz)



float Pvendastotal( float, float);
void P(float lista[], float lista2[], float lista3[]);
int main(){
	float lista[]={3,11,2};
	float lista2[]= {15,1,10};
	float lista3[] = [9,8,0];
	float total, total1=0, total2=0, total3=0.
	int i;

	
}

*/

#include <stdio.h>
#include <stdlib.h>
#define Q 3

float Pvendastotal( float, float);
void P(float lista[], float lista2[], float lista3[]);
int main(){
	float lista[]={3,11,2};
	float lista2[]= {15,1,10};
	float lista3[] = {9,8,0};
	float total, total1=0, total2=0, total3=0;
	

	for(int i =0;i<Q;i++)
		{
			total1+=lista[i];
			total2+= lista2[i];
			total3+= lista3[i];
		}
	printf("\n \n O total de vendas da Roldana é %.2f: ", total1);
    printf("\n \n O total de vendas da broca é %.2f: ", total2);
	printf("\n\n O total de vendas da cunha é %.2f: ", total3);
	total = total1+total2+total3;
	puts("\n\n");
	printf("\n\n O total de produtos vendidos nos tres meses são : %.2f", total );
	printf("O percentual de Roldanas vendidas nos tres meses são: %.2f %% \n", Pvendastotal(total1, total));
	printf("O percentual de Brocas vendidas nos tres meses são: %.2f %% \n", Pvendastotal(total2, total));
	printf("O percentual de Cunhas vendidas nos tres meses são: %.2f %% \n", Pvendastotal(total3, total));
	P(lista, lista2, lista3);
	return 0 ;
}
float Pvendastotal(float vendasRoldana, float totalProdutos){
	float percentual = (vendasRoldana / totalProdutos) * 100;
	return percentual;
}




