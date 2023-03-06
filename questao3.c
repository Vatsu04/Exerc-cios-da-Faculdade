/* A empresa XKW, concedeu um bônus de 20% do valor do salário a todos os funcionários com tempo de trabalho na empresa = ou > que 5 anos e 10% aos demais. 

Para os funcionários consultarem seu bônus, foi solicitado a equipe de TI desenvolver um programa que: receba o nome do funcionário e o valor do bônus */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int tempo_de_trabalho = 0;
  char nome[50];
  float salario;
  float novo_salario;
  
  printf("Bem vindo ao programa de ajuste de salário, favor digite seu nome: ");
  scanf("%s", nome);

  puts("Digite seu tempo de casa em anos: ");
  scanf("%i", &tempo_de_trabalho);
  
  printf("Digite seu salario: ");
  scanf("%f", &salario);
  
  if (tempo_de_trabalho >= 5) {
    novo_salario = salario + salario/5;
  } else {
    novo_salario = salario + salario/10;
  }
  
  printf("Nome: %s\n", nome);
  printf("Tempo de casa: %i anos\n", tempo_de_trabalho);
  printf("Antigo salário: %.2f\n", salario);
  printf("Novo salário: %.2f\n", novo_salario);
  
  return 0;
}
