#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	int *p;
	p = &x;
	
	
	printf("Informe um valor:\n");
	scanf("%d", &x);
	*p = *p + 10;
	
	printf("Valor de X = %d\n", x);
	printf("endereço de X = %p\n", &x);
	printf("Valor armazenado em P = %p\n", p);
	printf("Valor apontado para P = %d\n", *p);
}