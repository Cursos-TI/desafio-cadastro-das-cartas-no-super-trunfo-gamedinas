#include <stdio.h>
#include <string.h>

// Estrutura de código para o desafio do Super Trunfo
struct Carta {
    char estado;
    char codigo[4];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

int main() {
    // Duas variáveis do tipo struct Carta
    struct Carta carta1;
    struct Carta carta2;

    // --- Dados da primeira carta (São Paulo) ---
    carta1.estado = 'SP';
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nome_cidade, "Sao Paulo");
    carta1.populacao = 12325000;
    carta1.area = 1521.11;
    carta1.pib = 699.28;
    carta1.num_pontos_turisticos = 50;

    // --- Dados da segunda carta (Rio de Janeiro) ---
    carta2.estado = 'RJ';
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1200.25;
    carta2.pib = 300.50;
    carta2.num_pontos_turisticos = 30;

    // --- Exibição das cartas ---
    printf("--- Desafio Super Trunfo ---\n");

    // Exibição das informações da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.num_pontos_turisticos);

    // Exibição das informações da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.num_pontos_turisticos);

    return 0;
