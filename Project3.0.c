# include <stdio.h>

int gc, gsaldo;

typedef struct{

	char nome[250];
	int cpf;

}strat0;

typedef struct{

	int numcont;
	float saldo;
	int * conta;

}strat1;


int main(){


	strat0 name;
	strat0 cadf;
	strat1 cont, nconta;

	int operador = 0;

	printf("Ficha cadastral. \n");

	printf("Digite seu nome: ");
	fflush(stdout);
	gets(name.nome);

	printf("Digite seu CPF: ");
	fflush(stdout);
	scanf("%d", &cadf.cpf);

	printf("Cadastro concluido com sucesso. \n");

	printf("N�mero da conta: %d\n", &nconta.conta);


	printf("Insira o n�mero da sua conta: ");
	fflush(stdout);
	scanf("%d", &cont.numcont);

	if(cont.numcont == &nconta.conta){

		printf("1 - Dep�sito.\n");
		printf("2 - Saque. \n");
		printf("3 - Saldo. \n");

		printf("Digite o valor do deposito: ");
		fflush(stdout);
		scanf("%d", &gc);

		printf("Digite o Operador: ");
		fflush(stdout);
		scanf("%d", &operador);

		switch(operador){

		case 1:

			printf("Digite o valor do deposito: ");
			fflush(stdout);
			scanf("%d", &gc);

			printf("Voc� depositou %d", gc + gc);

			break;
		case 2:
			printf("Digite o valor do saque: ");
			fflush(stdout);
			scanf("%d", &gc);

			printf("Voc� sacou %d", gc - gc);

			break;
		case 3:
			printf("Seu saldo � %d", gc);

			break;


		default:
			printf("Op��o invalida. ");}


	}else
		printf("Conta invalida. ");





	return 0;


}
