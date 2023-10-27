while(num2==0) {
	printf("nao e possivel dividir por zero\n);
	printf("digite um novo valor:\n");
	scanf("%d",&num2);
}
total = num1/num2;
printf("total divisao: %.2f\n",total);
}

float digiteUmValor(int numero){
	float valor;
	printf("digite um valor para o numero %d:\n=>",numero);
	scanf("%f",&valor);
	return valor;
}

void menu(){
	printf("1. soma\n");
	printf("2. subtracao\n");
	printf("3. multiplicacao\n");
	printf("4. divisao\n");
	printf("5.sair\n=>");
}
