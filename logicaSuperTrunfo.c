#include <stdio.h>

int main()
{
    char estado[40], estado2[40];                          // Letra de A a H representando os 8 estados
    char codigo_carta[40], codigo_carta2[40];              // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade[50], nome_cidade2[50];                // Nome da cidade, exemplo: São Paulo
    unsigned long int populacao, populacao2;               // População da cidade, exemplo: 1000000
    float area, area2;                                     // Área da cidade em km², exemplo: 1500.50
    float pib, pib2;                                       // Produto Interno Bruto da cidade, exemplo: 500000000.00
    int pontos_turisticos, pontos_turisticos2;             // Número de pontos turísticos, exemplo: 10
    float densidade_populacional, densidade_populacional2; // Densidade populacional, exemplo: 666.67
    float pib_capita, pib_capita2;                         // PIB per capita, exemplo: 50000.00
    float superPoder, superPoder2;                         // Atributo especial da carta, exemplo: 100.00

    printf("\nBem-vindo ao jogo Super Trunfo!\n");
    printf("Você irá cadastrar duas cartas, começando pela primeira.\n");

    printf("\nDigite o estado (Letra de A a H): \n");
    scanf("%s", estado);

    printf("Digite o código da carta (ex: A01, B02): \n");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;                                              // Calcula a densidade populacional
    pib_capita = (pib * 1000000000) / (float)populacao;                                            // Converte o PIB para bilhões e calcula o PIB per capita
    superPoder = populacao + area + pib + pontos_turisticos + pib_capita - densidade_populacional; // Calcula o super poder da carta

    printf("\nAgora você irá cadastrar a segunda carta.\n");

    printf("\nDigite o estado (Letra de A a H): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta (ex: A01, B02): \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2); // Converte para bilhões

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;                                                  // Calcula a densidade populacional
    pib_capita2 = (pib2 * 1000000000) / (float)populacao2;                                                // Converte o PIB para bilhões e calcula o PIB per capita
    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_capita2 - densidade_populacional2; // Calcula o super poder da carta

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f reais\n", pib_capita);
    printf("Super Poder: %.2f\n", superPoder);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\nComparando o atributo população...\n");
    if (populacao > populacao2) // Verifica qual carta tem a maior população
    {
        printf("Carta 1 - %s: %lu\n", nome_cidade, populacao);
        printf("Carta 2 - %s: %lu\n", nome_cidade2, populacao2);
        printf("Carta 1 vence com população maior: %lu\n\n", populacao);
    }
    else if (populacao < populacao2) // Verifica se a carta 2 tem a maior população
    {
        printf("Carta 1 - %s: %lu\n", nome_cidade, populacao);
        printf("Carta 2 - %s: %lu\n", nome_cidade2, populacao2);
        printf("Carta 2 vence com população maior: %lu\n\n", populacao);
    }
    else
    {
        printf("Empate na população entre %s e %s \n\n", nome_cidade, nome_cidade2);
    }

    return 0;
}
