#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração das váriaveis da carta 1 e 2:
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Cadastro da carta 1:
    printf("Digite a inicial do estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² da cidade da carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade da carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da carta 2:
    printf("Digite a inicial do estado da carta 2: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome_cidade2);
    
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km² da cidade da carta 2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos da cidade da carta 2: ");
    scanf("%d", &pontos_turisticos2);

    //Impressão das duas cartas:

    printf("\nDados da carta 1:\n");
    printf("Inicial do estado: %c \n", estado1);
    printf("Código da cidade: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome_cidade1);
    printf("População da cidade: %d \n", populacao1);
    printf("Área da cidade: %f \n", area1);
    printf("PIB da cidade: %f \n", pib1);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos1);

    printf("\nDados da carta 2:\n");
    printf("Inicial do estado: %c \n", estado2);
    printf("Código da cidade: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome_cidade2);
    printf("População da cidade: %d \n", populacao2);
    printf("Área da cidade: %f \n", area2);
    printf("PIB da cidade: %f \n", pib2);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos2);


    return 0;
}
