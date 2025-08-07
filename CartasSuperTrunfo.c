#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //estrutura da carta 1

        char codigo1[4];
        int populacao1;
        float area1;
        float pib1;
        int pontoTuristico1;
   
    //estrutura da carta 2

        char codigo2[4];
        int populacao2;
        float area2;
        float pib2;
        int pontoTuristico2;

    //cadastro da primeira carta

    printf("Digite o codigo da primeira carta (ex: A01) :" );
    scanf("%s", &codigo1);

    printf("Digite a populacao da primeira carta : ");
    scanf("%d", &populacao1);

    printf("Qual a area da primeira carta : ");
    scanf("%f", &area1);

    printf("Qual e o PIB da primeira carta : ");
    scanf("%f", &pib1);

    printf("Qual o numero de pontos turisticos : ");
    scanf("%d", &pontoTuristico1);

    //cadastro da segunda carta

    printf("Digite o codigo da segunda carta (ex: B01) : ");
    scanf("%s", &codigo2);

    printf("Digite a populacao da segunda carta : ");
    scanf("%d", &populacao2);

    printf("Qual a area da segunda carta : ");
    scanf("%f", &area2);

    printf("Qual e o PIB da segunda carta : ");
    scanf("%f", &pib2);

    printf("Qual o numero de pontos turisticos : ");
    scanf("%d", &pontoTuristico2);

    //Exibição dos dados

    printf("\n\n------ Carta 1 ------\n\n");

    printf("Codigo : %s \n", codigo1);
    printf("Populacao total : %d \n", populacao1);
    printf("Area : %.2f \n", area1);
    printf("PIB : %.2f \n", pib1);
    printf("Pontos turisticos : %d\n\n", pontoTuristico1);

    printf("\n\n------ Carta 2 ------\n\n");

    printf("Codigo : %s \n", codigo2);
    printf("Populacao total : %d \n :", populacao2);
    printf("Area : %.2f \n", area2);
    printf("PIB : %.2f \n", pib2);
    printf("Pontos turisticos : %d \n", pontoTuristico2);



    return 0;
}
