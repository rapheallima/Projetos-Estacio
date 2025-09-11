#include <stdio.h>

int main()
{

    // Declaração das variáveis para a Carta 1 e Carta 2

    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1; // Variável para o super poder da Carta 1

    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2; // Variável para o super poder da Carta 2

    // Entrada dos dados para a Carta 1 e Carta 2

    printf("\n"); // Linha em branco para melhor visualização

    printf("Digite os dados da Carta 1:\n\n"); // Título para a Carta 1

    printf("Digite a sigla do estado (1 caractere): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado (3 caracteres): ");
    scanf(" %s", codigo1);

    printf("Digite o nome do estado (ate 50 caracteres): ");
    scanf(" %s", nome1);

    printf("Digite a populacao do estado: ");
    scanf(" %d", &populacao1);

    printf("Digite a area do estado: ");
    scanf(" %f", &area1);

    printf("Digite o PIB do estado: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos do estado: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculo da densidade demográfica e PIB per capita para a Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Convertendo PIB de bilhões para reais
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1 / densidade1) + pibPerCapita1;

    printf("\n"); // Linha em branco para melhor visualização

    printf("Digite os dados da Carta 2:\n"); // Título para a Carta 2
    printf("\n");

    printf("Digite a sigla do estado (1 caractere): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado (3 caracteres): ");
    scanf(" %s", codigo2);

    printf("Digite o nome do estado (ate 50 caracteres): ");
    scanf(" %s", nome2);

    printf("Digite a populacao do estado: ");
    scanf(" %d", &populacao2);

    printf("Digite a area do estado: ");
    scanf(" %f", &area2);

    printf("Digite o PIB do estado: ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos do estado: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade demográfica e PIB per capita para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Convertendo PIB de bilhões para reais
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1 / densidade2) + pibPerCapita2;

    printf("\n"); // Linha em branco para melhor visualização

    printf("Os dados da Carta 1 sao:\n\n"); // Título para a exibição da Carta 1
    printf("Sigla: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder Carta 1: %.4f\n\n", superPoder1);

    printf("Os dados da Carta 2 sao:\n\n"); // Título para a exibição da Carta 2
    printf("Sigla: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %.4f\n\n", superPoder2);

    printf("Comparacao das Cartas:\n\n"); // Título para a comparação das cartas

    char comparacao_populacao = '1' + (populacao1 < populacao2);
    printf("Populacao: Carta %c Venceu\n", comparacao_populacao);

    char comparacao_area = '1' + (area1 < area2);
    printf("Area: Carta %c Venceu\n", comparacao_area);

    char comparacao_pib = '1' + (pib1 < pib2);
    printf("PIB: Carta %c Venceu\n", comparacao_pib);

    char comparacao_pontosTuristicos = '1' + (pontosTuristicos1 < pontosTuristicos2);
    printf("Pontos Turisticos: Carta %c Venceu\n", comparacao_pontosTuristicos);

    char comparacao_densidade = '1' + (densidade1 > densidade2);
    printf("Densidade Populacional: Carta %c Venceu\n", comparacao_densidade);

    char comparacao_pibPerCapita = '1' + (pibPerCapita1 < pibPerCapita2);
    printf("PIB per capita: Carta %c Venceu\n", comparacao_pibPerCapita);

    char comparacao_superPoder = '1' + (superPoder1 < superPoder2);
    printf("Super Poder: Carta %c Venceu\n\n", comparacao_superPoder);

    return 0;
}