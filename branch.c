#include <biblioteca.h>
//arquivo para biblioteca de funcoes
//

void soma(int num1, int num2) {
	int total;
	total = num1 + num2;
	printf("total soma: %d\n", total);
}

void subtracao(int num1, int num2) {
	int total;
	total = num1 - num2;
	printf("total subtracao: %d\n", total);
}

void multiplicacao(int num1, int num2) {
	int total;
	total = num1 * num2;
	printf("total multiplicacao: %d\n", total);
}

void divisao(int num1, int num2) {
	float total;
	while (num2 == 0) {
		printf("nao é possivel dividir por zero. insira outro valor para num2: ");
		scanf("%d", &num2);
	}
	total = (float)num1 / num2;
	printf("total divisao: %.2f\n", total);
}

int main() {
	int num1, num2;
	printf("digite dois numeros inteiros: ");
	scanf("%d %d", &num1, &num2);

	soma(num1, num2);
	subtracao(num1, num2);
	multiplicacao(num1, num2);
	divisao(num1, num2);

	return 0;
}
