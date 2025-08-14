#include <stdio.h>

int main() {
    char estado[] = {'A', 'B', 'C', 'D', 'E', 'F', 'H'};

    char codigo1[4], cidade1[32];
    int  ponto_turistico1;
    float area1, pib1;
    unsigned long int populacao1;

    char codigo2[4], cidade2[32];
    int ponto_turistico2;
    float area2, pib2;
    unsigned long int populacao2;


    printf("\n---------------------------------\n");
    printf("\nSUPER-TRUNFO\n");
    printf("\n---------------------------------\n");
    printf("Bem-vindos ao jogo super trunfo!!!\n");
    printf("Cada carta possui atributos únicos para determinar o vencedor!!\n\n");

    // Carta 1
    printf("-------------------------------\n");
    printf("--- Carta 01 ---\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado);

    printf("Digite o codigo EX:'A01': ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite quantos pontos turísticos tem: ");
    scanf("%d", &ponto_turistico1);

    printf("Digite a area geografica: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    // Carta 2
    printf("\n-------------------------------\n");
    printf("--- Carta 02 ---\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado);

    printf("Digite o codigo EX:'A01': ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite quantos pontos turísticos tem: ");
    scanf("%d", &ponto_turistico2);

    printf("Digite a area geografica: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("\n-------------------------------\n");

     //DENSIDADE POPULACIONAL

    float densidadePopulacao1 = (float)populacao1 / area1;//'casting' para maior precisao dos dados;
    float densidadePopulacao2 = (float)populacao2 / area2;//'casting' para maior precisao dos dados;

    //PIB PER CAPITA

    float perCapita1 = (float)pib1 / populacao1;//'casting' para maior precisao dos dados;
    float perCapita2 = (float)pib2 / populacao2;//'casting' para maior precisao dos dados;

    //Super Poder

    float superPoder1 = (float)(populacao1 + ponto_turistico1 + area1 + pib1 + perCapita1) / densidadePopulacao1;
    float superPoder2 = (float)(populacao2 + ponto_turistico2 + area2 + pib2 + perCapita2) / densidadePopulacao2;


    // Exibição dos dados
    printf("\n------------\n");
    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu Habitantes\n", populacao1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("Área geográfica: %.2f km²\n", area1);
    printf("PIB: R$%.2f Bilhoes de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km².\n", densidadePopulacao1);
    printf("PIB per capita: R$%.2f Reais.\n", perCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    printf("\n------------\n");

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu Habitantes\n", populacao2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);
    printf("Área geográfica: %.2f km²\n", area2);
    printf("PIB: R$%.2f Bilhoes de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km².\n", densidadePopulacao2);
    printf("PIB per capita: R$%.2f Reais.\n", perCapita2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    //Comparação das cartas

     
    printf("\n\n********* Comparando as cartas *********\n\n");

    printf("\n\n------------ Carta 1 ------------\n\n");

    printf("População - Cidade %s ganhou : %d\n", cidade1, (populacao1 > populacao2));
    printf("Pontos Turisticos - Cidade %s ganhou : %d\n", cidade1, (ponto_turistico1 > ponto_turistico2));
    printf("Área geográfica - Cidade %s ganhou: %d\n", cidade1, (area1 > area2));
    printf("PIB - Cidade %s ganhou: %d\n", cidade1, (pib1 > pib2));
    printf("Densidade populacional - Cidade %s ganhou: %d\n", cidade1, (densidadePopulacao1 < densidadePopulacao2));
    printf("PIB per Capita - Cidade %s ganhou: %d\n", cidade1, (perCapita1 > perCapita2));
    printf("Super Poder - Cidade %s ganhou: %d\n", cidade1, (superPoder1 < superPoder2));

    printf("\n\n------------ Carta 2 ------------\n\n");

    printf("População - Cidade %s ganhou : %d\n", cidade2, (populacao2 > populacao1));
    printf("Pontos Turisticos - Cidade %s ganhou : %d\n", cidade2, (ponto_turistico2 > ponto_turistico1));
    printf("Área geográfica - Cidade %s ganhou: %d\n", cidade2, (area2 > area1));
    printf("PIB - Cidade %s ganhou: %d\n", cidade2, (pib2 > pib1));
    printf("Densidade populacional - Cidade %s ganhou: %d\n", cidade2, (densidadePopulacao2 < densidadePopulacao1));
    printf("PIB per Capita - Cidade %s ganhou: %d\n", cidade2, (perCapita2 > perCapita1));
    printf("Super Poder - Cidade %s ganhou: %d\n", cidade2, (superPoder2 < superPoder1));


    printf("\n------------ FIM ------------\n");

    return 0;
}
