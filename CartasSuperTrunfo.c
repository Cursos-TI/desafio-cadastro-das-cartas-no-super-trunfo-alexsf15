//Criado por Alexssandro de Souza Freitas

#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Jogo entre duas cidades

int main() {
    // Variáveis para as duas cidades
    char nome1[50], nome2[50];
    int pop1, pop2;
    float pib1, pib2;
    float idh1, idh2;
    int opcao;

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("IDH (0.0 a 1.0): ");
    scanf("%f", &idh1);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("IDH (0.0 a 1.0): ");
    scanf("%f", &idh2);

    // Escolha do atributo para comparar
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - PIB\n");
    printf("3 - IDH\n");
    printf("Digite a opcao (1-3): ");
    scanf("%d", &opcao);

    // Comparação e resultado
    printf("\n--- Resultado ---\n");

    switch (opcao) {
        case 1:
            printf("Populacao - %s: %d | %s: %d\n", nome1, pop1, nome2, pop2);
            if (pop1 > pop2)
                printf("Vencedora: %s\n", nome1);
            else if (pop2 > pop1)
                printf("Vencedora: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("PIB - %s: %.2f | %s: %.2f\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedora: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("IDH - %s: %.2f | %s: %.2f\n", nome1, idh1, nome2, idh2);
            if (idh1 > idh2)
                printf("Vencedora: %s\n", nome1);
            else if (idh2 > idh1)
                printf("Vencedora: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
