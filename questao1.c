/* Julgue os itens subsequentes, acerca de códigos de programação (2,0) */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n= 5;
	int a=0;
	for (int b=1; b<=n; b++)
		for (int c=b;c<= n; c++){
			a = a +1;
		}
	
		printf("%d\n", a);
		system("pause");
	}
