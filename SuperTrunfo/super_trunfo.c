#include <stdio.h>

int main()
{

    // Declaração das variáveis para a Carta 1 e Carta 2

    // ********* Desafio para NV. Novato 1 *********

    // ********* Desafio para NV. Aventureiro 1 com densidade e PIB per Capita *********

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
    scanf(" %u", &populacao1);

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
    scanf(" %u", &populacao2);

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
    printf("Populacao: %u\n", populacao1);
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
    printf("Populacao: %ud\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder Carta 2: %.4f\n\n", superPoder2);

    // ********* Desafio para NV. Mestre 1 *********

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

    // ********* Desafio para NV. Novato 2 *********

    printf("Comparacao de Cartas (Atributo Escolhido: Populacao):\n\n"); // Comparação entre cartas

    printf("Carta 1 - %s (%s): %u\n", nome1, codigo1, populacao1); // Informativo das cartas
    printf("Carta 2 - %s (%s): %u\n\n", nome2, codigo2, populacao2);

    if (populacao1 > populacao2) // Lógica de comparação entre cartas
    {
        printf("Resultado: Carta 1 (%s) venceu !\n\n", nome1);
    }
    else
    {
        printf("Resultado: Carta 2 (%s) venceu !\n\n", nome2);
    }

    // ********* Desafio para NV. Aventureiro 2 *********

    printf("Escolha o atributo para comparacao entre as cartas: \n\n");

    int opcao;

    printf("1 - Populacao\n");

    printf("2 - Area\n");

    printf("3 - PIB\n");

    printf("4 - Pontos Turisticos\n");

    printf("5 - Densidade Populacional\n\n");

    scanf("%d", &opcao);

    printf("\nSua escolha: %d\n\n", opcao);

    switch (opcao) // switch para escolher entre as opcoes.
    {

    case 1:

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s\n\n", nome1, nome2);

        printf("Atributo escolhido: Populacao\n\n");

        printf("Populacao Carta 1: %u - Populacao Carta 2: %u\n\n", populacao1, populacao2);

        if (populacao1 > populacao2)
        {

            printf("Carta 1 Venceu !\n\n");
        }
        else if (populacao1 < populacao2)
        {

            printf("Carta 2 Venceu !\n\n");
        }
        else
        {

            printf("Houve um Empate !\n\n");
        }

        break;

    case 2:

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s\n\n", nome1, nome2);

        printf("Atributo escolhido: Area\n\n");

        printf("Area Carta 1: %.2f - Area Carta 2: %.f2\n\n", area1, area2);

        if (area1 > area2)
        {

            printf("Carta 1 Venceu !\n\n");
        }
        else if (area1 < area2)
        {

            printf("Carta 2 Venceu !\n\n");
        }
        else
        {

            printf("Houve um Empate !\n\n");
        }

        break;

    case 3:

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s\n\n", nome1, nome2);

        printf("Atributo escolhido: PIB\n\n");

        printf("PIB Carta 1: %.2f - PIB Carta 2: %.2f\n\n", pib1, pib2);

        if (pib1 > pib2)
        {

            printf("Carta 1 Venceu !\n\n");
        }
        else if (pib1 < pib2)
        {

            printf("Carta 2 Venceu !\n\n");
        }
        else
        {

            printf("Houve um Empate !\n\n");
        }

        break;

    case 4:

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s\n\n", nome1, nome2);

        printf("Atributo escolhido: Pontos Turisticos\n\n");

        printf("Pontos Turisticos Carta 1: %d - Pontos Turisticos Carta 2: %d\n\n", pontosTuristicos1, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
        {

            printf("Carta 1 Venceu !\n\n");
        }
        else if (pontosTuristicos1 < pontosTuristicos2)
        {

            printf("Carta 2 Venceu !\n\n");
        }
        else
        {

            printf("Houve um Empate !\n\n");
        }

        break;

    case 5:

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s\n\n", nome1, nome2);

        printf("Atributo escolhido: Densidade Populacional\n\n");

        printf("Densidade Populacional Carta 1: %.2f - Densidade Populacional Carta 2: %.2f\n\n", densidade1, densidade2);

        if (densidade1 > densidade2)
        {

            printf("Carta 1 Venceu !\n\n");
        }
        else if (densidade1 < densidade2)
        {

            printf("Carta 2 Venceu !\n\n");
        }
        else
        {

            printf("Houve um Empate !\n\n");
        }

        break;

    default:

        printf("Opcao invalida ! \n\n");

        break;
    }

    // ********* Desafio para NV. Mestre 2 *********

    int atributo1, atributo2, resultado1, resultado2;

    float soma1, soma2;

    printf("Bem-vindo ao jogo !\n");

    printf("Escolha o primeiro atributo: \n\n");

    printf("1 - Populacao\n");

    printf("2 - Area\n");

    printf("3 - PIB\n");

    printf("4 - Pontos Turisticos\n");

    printf("5 - Densidade Populacional\n");

    scanf("%d", &atributo1);

    switch (atributo1) // switch para escolher entre as opcoes.

    {

    case 1:

        printf("\nPrimeiro Atributo escolhido: Populacao\n\n");

        resultado1 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 0 : -1);

        soma1 += populacao1;

        soma2 += populacao2;

        break;

    case 2:

        printf("\nPrimeiro Atributo escolhido: Area\n\n");

        resultado1 = (area1 > area2) ? 1 : ((area1 < area2) ? 0 : -1);

        soma1 += area1;

        soma2 += area2;

        break;

    case 3:

        printf("\nPrimeiro Atributo escolhido: PIB\n\n");

        resultado1 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 0 : -1);

        soma1 += pib1;

        soma2 += pib2;

        break;

    case 4:

        printf("\nPrimeiro Atributo escolhido: Pontos Turisticos\n\n");

        resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : ((pontosTuristicos1 < pontosTuristicos2) ? 0 : -1);

        soma1 += pontosTuristicos1;

        soma2 += pontosTuristicos2;

        break;

    case 5:

        printf("\nPrimeiro Atributo escolhido: Densidade Populacional\n\n");

        resultado1 = (densidade1 < densidade2) ? 1 : ((densidade1 > densidade2) ? 0 : -1);

        soma1 += densidade1;

        soma2 += densidade2;

        break;

    default:

        printf("\nOpcao invalida ! \n\n");

        break;
    }

    printf("Escolha o segundo atributo: \n\n");

    printf("1 - Populacao\n");

    printf("2 - Area\n");

    printf("3 - PIB\n");

    printf("4 - Pontos Turisticos\n");

    printf("5 - Densidade Populacional\n");

    scanf("%d", &atributo2);

    if (atributo1 == atributo2)

    {

        printf("\nO segundo atributo nao pode ser igual ao primeiro");
    }

    else

    {

        switch (atributo2) // switch para escolher entre as opcoes.

        {

        case 1:

            printf("\nSegundo Atributo escolhido: Populacao\n\n");

            resultado2 = (populacao1 > populacao2) ? 1 : ((populacao1 < populacao2) ? 0 : -1);

            soma1 += populacao1;

            soma2 += populacao2;

            break;

        case 2:

            printf("\nSegundo Atributo escolhido: Area\n\n");

            resultado2 = (area1 > area2) ? 1 : ((area1 < area2) ? 0 : -1);

            soma1 += area1;

            soma2 += area2;

            break;

        case 3:

            printf("\nSegundo Atributo escolhido: PIB\n\n");

            resultado2 = (pib1 > pib2) ? 1 : ((pib1 < pib2) ? 0 : -1);

            soma1 += pib1;

            soma2 += pib2;

            break;

        case 4:

            printf("\nSegundo Atributo escolhido: Pontos Turisticos\n\n");

            resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : ((pontosTuristicos1 < pontosTuristicos2) ? 0 : -1);

            soma1 += pontosTuristicos1;

            soma2 += pontosTuristicos2;

            break;

        case 5:

            printf("\nSegundo Atributo escolhido: Densidade Populacional\n\n");

            resultado2 = (densidade1 < densidade2) ? 1 : ((densidade1 > densidade2) ? 0 : -1);

            soma1 += densidade1;

            soma2 += densidade2;

            break;

        default:

            printf("\nOpcao invalida ! \n\n");

            break;
        }

        printf("\nResultados da Comparacao !\n\n");

        printf("Nome da Carta 1: %s - Nome da Carta 2: %s.\n\n", nome1, nome2);

        printf("Comparacao do Primeiro Atributo:\n\n");

        if (resultado1 == 1)
        {

            printf("Carta 1 venceu no primeiro atributo !\n\n");
        }
        else if (resultado1 == 0)
        {

            printf("Carta 2 venceu no primeiro atributo !\n\n");
        }
        else
        {

            printf("Houve um empate no primeiro atributo !\n\n");
        }

        printf("Comparacao do Segundo Atributo:\n\n");

        if (resultado2 == 1)
        {

            printf("Carta 1 venceu no segundo atributo !\n\n");
        }
        else if (resultado2 == 0)
        {

            printf("Carta 2 venceu no segundo atributo !\n\n");
        }
        else
        {

            printf("Houve um empate no segundo atributo !\n\n");
        }

        printf("Soma dos atributos: \n\n");

        printf("Carta 1: %.2f - Carta 2: %.2f\n\n", soma1, soma2);

        if (soma1 > soma2)
        {

            printf("Vencedor Geral: Carta 1 (%s) Venceu !\n\n", nome1);
        }
        else if (soma1 < soma2)
        {

            printf("Vencedor Geral: Carta 2 (%s) Venceu !\n\n", nome2);
        }
        else
        {

            printf("A partida acabou em empate !\n\n");
        }

        return 0;
    }
}