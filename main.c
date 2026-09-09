//VICTOR HUGO ALVES VALENTIN
//Data inicial: 09/09/2026
//Data final: 09/09/2026
//Triagem Hospitalar Victor


#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[50];
	int idade;
	int gravidade;
} Paciente;

int main() {
	Paciente p1;

	printf("Digite o nome do paciente: ");
	fgets(p1.nome, 50, stdin);
	p1.nome[strcspn(p1.nome, "\n")] = 0;

	printf("Digite a idade: ");
	scanf("%d", &p1.idade);

	printf("Digite a gravidade (1 a 5): ");
	scanf("%d", &p1.gravidade);

	printf("\n--- Resultado da Triagem ---\n");
	printf("Paciente: %s\n", p1.nome);
	printf("Idade: %d anos\n", p1.idade);
	printf("Gravidade: %d\n", p1.gravidade);

	return 0;
}



































