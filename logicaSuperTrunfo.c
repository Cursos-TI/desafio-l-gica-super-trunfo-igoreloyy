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
    int opcao, opcaoComparacao;                            // Opção do usuário para iniciar o jogo, ver regras ou sair

    printf("\n==========================\n");
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("==========================\n");
    printf("\nEscolha uma das opções:\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver as regras\n");
    printf("3 - Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nVocê irá cadastrar duas cartas, começando pela primeira.\n");

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
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);
        break;

    case 2:
        printf("\nRegras do jogo Super Trunfo:\n");
        printf("1. Você cadastrará duas cartas.\n");
        printf("2. As cartas possuem atributos como população, área, PIB, pontos turísticos, etc.\n");
        printf("3. O jogador escolhe um atributo para comparar as cartas.\n");
        printf("4. O jogador com o maior valor do atributo escolhido vence a rodada, exceto pela densidade populacional.\n\n");
        return 0;
        break;

    case 3:
        printf("\nSaindo do jogo. Até logo!\n\n");
        return 0;

    default:
        printf("\nOpção inválida. Saindo\n\n");
        return 1;
        break;
    }

    densidade_populacional = (float)populacao / area;                                              // Calcula a densidade populacional
    pib_capita = (pib * 1000000000) / (float)populacao;                                            // Converte o PIB para bilhões e calcula o PIB per capita
    superPoder = populacao + area + pib + pontos_turisticos + pib_capita - densidade_populacional; // Calcula o super poder da carta

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

    printf("\nEscolha um atributo para comparar as cartas:\n");
    printf("1 - Estado\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Densidade populacional\n");
    printf("7 - PIB per capita\n");
    printf("8 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcaoComparacao);
    switch (opcaoComparacao)
    {
    case 1:
        printf("\nVocê escolheu comparar pelo estado.\n");
        if (estado[0] == estado2[0])
            printf("As cartas são do mesmo estado.\n\n");
        else
            printf("As cartas são de estados diferentes: %s e %s\n\n", estado, estado2);
        break;

    case 2:
        printf("\nVocê escolheu comparar pela população.\n");
        if (populacao > populacao2)
            printf("A carta 1 vence com população de %lu contra %lu da carta 2.\n\n", populacao, populacao2);
        else if (populacao < populacao2)
            printf("A carta 2 vence com população de %lu contra %lu da carta 1.\n\n", populacao2, populacao);
        else
            printf("As cartas têm a mesma população: %lu.\n", populacao);
        break;

    case 3:
        printf("\nVocê escolheu comparar pela área.\n");
        if (area > area2)
            printf("A carta 1 vence com área de %.2f km² contra %.2f km² da carta 2.\n\n", area, area2);
        else if (area < area2)
            printf("A carta 2 vence com área de %.2f km² contra %.2f km² da carta 1.\n\n", area2, area);
        else
            printf("As cartas têm a mesma área: %.2f km².\n", area);
        break;

    case 4:
        printf("\nVocê escolheu comparar pelo PIB.\n");
        if (pib > pib2)
            printf("A carta 1 vence com PIB de %.2f bilhões contra %.2f bilhões da carta 2.\n\n", pib, pib2);
        else if (pib < pib2)
            printf("A carta 2 vence com PIB de %.2f bilhões contra %.2f bilhões da carta 1.\n\n", pib2, pib);
        else
            printf("As cartas têm o mesmo PIB: %.2f bilhões.\n", pib);
        break;

    case 5:
        printf("\nVocê escolheu comparar pelos pontos turísticos.\n");
        if (pontos_turisticos > pontos_turisticos2)
            printf("A carta 1 vence com %d pontos turísticos contra %d da carta 2.\n\n", pontos_turisticos, pontos_turisticos2);
        else if (pontos_turisticos < pontos_turisticos2)
            printf("A carta 2 vence com %d pontos turísticos contra %d da carta 1.\n\n", pontos_turisticos2, pontos_turisticos);
        else
            printf("As cartas têm o mesmo número de pontos turísticos: %d.\n\n", pontos_turisticos);
        break;

    case 6:
        printf("\nVocê escolheu comparar pela densidade populacional.\n");
        if (densidade_populacional > densidade_populacional2)
            printf("A carta 2 vence com densidade populacional menor, de %.2f habitantes/km² contra %.2f da carta 1.\n\n", densidade_populacional2, densidade_populacional);
        else if (densidade_populacional < densidade_populacional2)
            printf("A carta 1 vence com densidade populacional de %.2f habitantes/km² contra %.2f da carta 2.\n\n", densidade_populacional, densidade_populacional2);
        else
            printf("As cartas têm a mesma densidade populacional: %.2f habitantes/km².\n\n", densidade_populacional);
        break;

    case 7:
        printf("\nVocê escolheu comparar pelo PIB per capita.\n");
        if (pib_capita > pib_capita2)
            printf("A carta 1 vence com PIB per capita de %.2f reais contra %.2f da carta 2.\n\n", pib_capita, pib_capita2);
        else if (pib_capita < pib_capita2)
            printf("A carta 2 vence com PIB per capita de %.2f reais contra %.2f da carta 1.\n\n", pib_capita2, pib_capita);
        else
            printf("As cartas têm o mesmo PIB per capita: %.2f reais.\n", pib_capita);
        break;

    case 8:
        printf("\nVocê escolheu comparar pelo Super Poder.\n");
        if (superPoder > superPoder2)
            printf("A carta 1 vence com Super Poder de %.2f contra %.2f da carta 2.\n\n", superPoder, superPoder2);
        else if (superPoder < superPoder2)
            printf("A carta 2 vence com Super Poder de %.2f contra %.2f da carta 1.\n\n", superPoder2, superPoder);
        else
            printf("As cartas têm o mesmo Super Poder: %.2f.\n\n", superPoder);
        break;

    default:
        printf("\nOpção inválida. Saindo\n\n");
        break;
    }

    return 0;
}
