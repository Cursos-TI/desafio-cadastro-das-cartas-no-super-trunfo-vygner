#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declarando as variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declarando as variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Carta 1
    printf("Cadastro da Carta 1: \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex.: A01): ");
    scanf(" %s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);

    printf("Digite a População: ");
    scanf(" %d", &populacao1);

    printf("Digite a Área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %f", &pontosTuristicos1);

    // Carta 2
    printf("\nCadastro da Carta 2: \n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex.: A01): ");
    scanf(" %s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &nomeCidade2);

    printf("Digite a População: ");
    scanf(" %d", &populacao2);

    printf("Digite a Área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf(" %f", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Exibindo os valores inseridos para cada carta, um por linha

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
