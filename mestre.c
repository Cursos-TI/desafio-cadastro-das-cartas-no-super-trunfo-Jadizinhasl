#include <stdio.h>

int main() {
    // Estrutura para armazenar informações das cartas
    typedef struct {
        char estado;
        char codigo[4];
        char nomeCidade[50];
        unsigned long int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
        float superPoder;
    } Carta;
    
    Carta cartas[2];
    
    // Entrada de dados
    for (int i = 0; i < 2; i++) {
        printf("\nDigite os dados da Carta %d:\n", i + 1);
        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);
        printf("Código da carta (ex: A01): ");
        scanf(" %s", cartas[i].codigo);
        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);
        printf("População: ");
        scanf(" %lu", &cartas[i].populacao);
        printf("Área (km²): ");
        scanf(" %f", &cartas[i].area);
        printf("PIB (em bilhões de reais): ");
        scanf(" %f", &cartas[i].pib);
        printf("Número de pontos turísticos: ");
        scanf(" %d", &cartas[i].pontosTuristicos);
        
        // Cálculos
        cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;
        cartas[i].pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao;
        cartas[i].superPoder = cartas[i].populacao + cartas[i].area + (cartas[i].pib * 1000000000) + 
                               cartas[i].pontosTuristicos + cartas[i].pibPerCapita + (1 / cartas[i].densidadePopulacional);
    }
    
    // Exibição dos resultados
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %lu\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", cartas[i].pibPerCapita);
        printf("Super Poder: %.2f\n", cartas[i].superPoder);
    }
    
    // Comparação de atributos
    const char *atributos[] = {"População", "Área", "PIB", "Pontos Turísticos", "Densidade Populacional", "PIB per Capita", "Super Poder"};
    float valoresCarta1[] = {cartas[0].populacao, cartas[0].area, cartas[0].pib, cartas[0].pontosTuristicos, cartas[0].densidadePopulacional, cartas[0].pibPerCapita, cartas[0].superPoder};
    float valoresCarta2[] = {cartas[1].populacao, cartas[1].area, cartas[1].pib, cartas[1].pontosTuristicos, cartas[1].densidadePopulacional, cartas[1].pibPerCapita, cartas[1].superPoder};
    
    printf("\nComparação de Cartas:\n");
    for (int i = 0; i < 7; i++) {
        if (i == 4) { // Regra especial: menor densidade vence
            if (valoresCarta1[i] < valoresCarta2[i])
                printf("%s: Carta 1 venceu (1)\n", atributos[i]);
            else
                printf("%s: Carta 2 venceu (0)\n", atributos[i]);
        } else { // Regra geral: maior valor vence
            if (valoresCarta1[i] > valoresCarta2[i])
                printf("%s: Carta 1 venceu (1)\n", atributos[i]);
            else
                printf("%s: Carta 2 venceu (0)\n", atributos[i]);
        }
    }
    
    return 0;
}
