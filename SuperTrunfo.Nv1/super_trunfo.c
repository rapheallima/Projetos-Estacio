#include <stdio.h>

int main()
{

    // Declaração das variáveis para a Carta 1 e Carta 2

    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados para a Carta 1 e Carta 2

    printf("\n"); // Linha em branco para melhor visualização

    printf("Digite os dados da Carta 1:\n"); // Título para a Carta 1
    printf("\n");

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

    printf("\n"); // Linha em branco para melhor visualização

    printf("Os dados da Carta 1 sao:\n"); // Título para a exibição da Carta 1
    printf("Sigla: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para melhor visualização

    printf("Os dados da Carta 2 sao:\n"); // Título para a exibição da Carta 2
    printf("Sigla: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}