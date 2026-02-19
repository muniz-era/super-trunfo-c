#include <stdio.h>

int main() {
    // Variaveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variaveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Populacao: ");
    scanf("%d", &populacao1);
    
    printf("Area (em km2): ");
    scanf("%f", &area1);
    
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Populacao: ");
    scanf("%d", &populacao2);
    
    printf("Area (em km2): ");
    scanf("%f", &area2);
    
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibicao dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibicao dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    // Mensagem final para segurar a tela
    printf("\nDigite Enter para sair...");
    // Limpando o lixo do teclado pro getchar não passar direto
    while(getchar() != '\n'); 
    // Pausa esperando o Enter
    getchar();

    return 0;
}
