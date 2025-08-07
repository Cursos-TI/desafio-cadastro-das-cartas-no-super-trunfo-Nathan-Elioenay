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

    struct Carta{ //estrutura da carta

        char codigo[4];
        int populacao;
        float area;
        float pib;
        int pontoTuristico;
    };

    //duas cartas

    struct Carta carta1;
    struct Carta carta2;

    //cadastro da primeira carta

    printf("Digite o codigo da primeira carta (ex: A01)" : );
    scanf("%s", &carta1.codigo);

    printf("Digite a populacao da primeira carta : ");
    scanf("%d", &carta1.populacao);

    printf("Qual a area da primeira carta : ");
    scanf("%f", &carta1.area);

    printf("Qual e o PIB da primeira carta : ");
    scanf("%f", &carta1.pib);

    printf("Qual o numero de pontos turisticos : ");
    scanf("%d", &carta1.pontoturistico);

    //cadastro da segunda carta

    printf("Digite o codigo da segunda carta (ex: B01) : ");
    scanf("%s", &carta2.codigo);

    printf("Digite a populacao da segunda carta : ");
    scanf("%d", &carta2.populacao);

    printf("Qual a area da segunda carta : ");
    scanf("%f", &carta2.area);

    printf("Qual e o PIB da segunda carta : ");
    scanf("%f", &carta2.pib);

    printf("Qual o numero de pontos turisticos : ");
    scanf("%d", &carta2.pontoturistico);

    //Exibição dos dados

    printf("\n\n------ Carta 1 ------\n\n");

    printf("Codigo : %s \n", carta1.codigo);
    printf("Populacao total : %d \n", carta1.populacao);
    printf("Area : %.2f \n", carta1.area);
    printf("PIB : %.2f \n", carta1.pib);
    printf("Pontos turisticos : %d\n\n", carta1.pontoturistico);

    printf("\n\n------ Crata 2 ------\n\n");

    printf("Codigo : %s \n", carta2.codigo);
    printf("Populacao total : %d \n :", carta2.populacao);
    printf("Area : %.2f \n", carta2.area);
    printf("PIB : %.2f \n", carta2.pib);
    printf("Pontos turisticos : %d \n", carta2.pontoturistico);



    return 0;
}
