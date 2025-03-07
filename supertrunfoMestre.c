#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];         // Exemplo: "A01"
    char cidade1[100];       // Nome da cidade
    unsigned long int populacao1;
    float area1;
    float pib1;              // PIB em bilhoes de reais
    int pontosTuristicos1;
    float densidade1;        // Habitantes por km²
    float pibPerCapita1;     // PIB per capita em reais
    float superPoder1;       // Soma dos atributos numéricos

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];         // Exemplo: "B02"
    char cidade2[100];       // Nome da cidade
    unsigned long int populacao2;
    float area2;
    float pib2;              // PIB em bilhoes de reais
    int pontosTuristicos2;
    float densidade2;        // Habitantes por km²
    float pibPerCapita2;     // PIB per capita em reais
    float superPoder2;       // Soma dos atributos numéricos

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade1);  // Lê linha inteira (com espaços)
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e do PIB per Capita para cada carta
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    
    // Como o PIB é informado em bilhoes de reais, convertemos para reais multiplicando por 1e9
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // Cálculo do Super Poder: soma dos atributos numéricos
    // Os atributos considerados são: população, área, PIB, pontos turísticos, PIB per capita e o inverso da densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição dos dados completos para a Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Exibição dos dados completos para a Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos entre as cartas
    printf("\nComparacao de Cartas:\n");

    // População: vence a carta com valor maior
    if (populacao1 > populacao2)
        printf("Populacao: Carta 1 venceu (1)\n");
    else
        printf("Populacao: Carta 2 venceu (0)\n");

    // Área: vence a carta com valor maior
    if (area1 > area2)
        printf("Area: Carta 1 venceu (1)\n");
    else
        printf("Area: Carta 2 venceu (0)\n");

    // PIB: vence a carta com valor maior
    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");

    // Pontos Turísticos: vence a carta com valor maior
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    // Densidade Populacional: vence a carta com valor menor
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");

    // PIB per Capita: vence a carta com valor maior
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");

    // Super Poder: vence a carta com valor maior
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
