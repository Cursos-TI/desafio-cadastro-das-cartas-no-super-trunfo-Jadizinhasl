#include <stdio.h>

int main() {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;
    
     printf("Bem-vindo ao Super Trunfo - Países!\n");

    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);

    printf("\nDados da cidade cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", ponto_turistico);

    return 0;
}
