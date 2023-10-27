#include <biblioteca.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	printf("programa para calcular a soma de dois numeros.\n");
	printf("digite um valor para o numero 1:");
	scanf("%d",&numero1);
	printf("digite um valor para o numero:");
	scanf("%d",&numero2);
	soma(numero1,numero2);
	subtracao(numero1,numero2);
	multiplicacao(numero1,numero2);
	divisao(numero1,numero2);

return 0;
} 
