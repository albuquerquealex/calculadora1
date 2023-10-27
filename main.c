#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char *argv[]) {
	int opcao;
	printf("\t\tprograma para calcular a soma de dois numeros.\n");
	printf("\t\t==escolha uma operacao==\n");
	menu();
	printf("1. soma\n2. subtracao\n3. multiplicacao\n4. divisao\n=>");
	scanf("%d",&opcao);
	while(opcao != 5){

	switch(opcao){
		switch(opcao){
			case 1:
				soma(digiteUmValor(2),digiteUmValor(1));
				break;
			case 2:
				multiplicacao(digiteUmValor(2),digiteUmValor(1));
				break;
			case 3:
				multiplicacao(digiteUmValor(2),digiteUmValor(1));
				break;
			case 4:
				divisao(digiteUmValor(2),digiteUmValor(1));
				break;
	}
	printf("deseja executar outra operacao?");
	scanf("%d",&opcao);
	}
return 0;
}

