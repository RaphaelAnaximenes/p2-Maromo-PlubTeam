# include <stdio.h>
# include <stdlib.h>

typedef struct{

	int id;
	int * matr;       // Matricula.

}aluno;


int med(int nota1, int nota2, int nota3, int media){


	media = 0;
	media =	(nota1 + nota2 + nota3) / 3;

	printf("Sua media e: %d\n", media);


	return media;
};


int main(){


	char nome[250];
	aluno idade;
	aluno matricula;
	int not[3];
	int verificar, media, result = 0;


	printf("Digite o nome do aluno: ");
	fflush(stdout);
	gets(nome);

	printf("Digite a idade do aluno: ");
	fflush(stdout);
	scanf("%d", &idade.id);


	printf("O aluno é: %s\n", nome);
	printf("A idade é: %d\n", idade.id);

	printf("Matricula: %d\n", &matricula.matr);



	printf("Digite a matricula: ");
	fflush(stdout);
	scanf("%d", &verificar);


	if(verificar == &matricula.matr){

		printf("Matricula aceita. \n");


		for(int i = 0; i < 3; i++){

			printf("Digite as notas: ");
			fflush(stdout);
			scanf("%d", &not[i]);};


	for(int n = 0; n < 3; n++){

		printf("A nota é: %d\n", not[n]);};


	media = med(not[0], not[1], not[2], result);


	if(media >= 5){
		printf("Voce esta aprovado. ");

	}else if(media < 5){
		printf("Voce esta reprovado. ");
	}




	}else
		printf("Matricula invalida. ");



	return 0;

}
