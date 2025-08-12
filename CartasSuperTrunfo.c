#include <stdio.h>

int main() {
    char estado1[8], codigo1[4], cidade1[32];
    int populacao1, ponto_turistico1;
    float area1, pib1;

    char estado2[8], codigo2[4], cidade2[32];
    int populacao2, ponto_turistico2;
    float area2, pib2;

    printf("\n---------------------------------\n");
    printf("\nSUPER-TRUNFO\n");
    printf("\n---------------------------------\n");
    printf("Bem-vindos ao jogo super trunfo!!!\n");
    printf("Cada carta possui atributos únicos para determinar o vencedor!!\n\n");

    // Carta 1
    printf("-------------------------------\n");
    printf("--- Carta 01 ---\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", estado1);

    printf("Digite o codigo EX:'A01': ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

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
    scanf("%s", estado2);

    printf("Digite o codigo EX:'A01': ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turísticos tem: ");
    scanf("%d", &ponto_turistico2);

    printf("Digite a area geografica: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("\n-------------------------------\n");

    // Exibição dos dados
    printf("\n------------\n");
    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);
    printf("Área geográfica: %.2f\n", area1);
    printf("PIB: %.8f\n", pib1);

    printf("\n------------\n");

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);
    printf("Área geográfica: %.2f\n", area2);
    printf("PIB: %.8f\n", pib2);

    printf("\n------------\n");

    return 0;
}
