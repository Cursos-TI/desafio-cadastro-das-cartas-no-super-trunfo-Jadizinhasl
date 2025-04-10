#include <stdio.h>

int main() {
    // Declaração das variáveis primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    
    // Declaração das variáveis segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    
    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %i", &populacao1);
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %i", &pontosTuristicos1);
    
    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %i", &populacao2);
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %i", &pontosTuristicos2);

    //Formulas para calcular densidade e PIB
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000)/ populacao2;

    
    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    
    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    
    return 0;
}