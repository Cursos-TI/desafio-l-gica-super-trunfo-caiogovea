#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosT1, pontosT2;

// Carta 1
    printf("\n=== Cadastro Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area (km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosT1);

    printf("\n");

// Carta 2
    printf("=== Cadastro Carta 2 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosT2);
    
      // Calculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPC1 = (pib1 * 1000000000.0) / (float)populacao1;
    float pibPC2 = (pib2 * 1000000000.0) / (float)populacao2;
    
  // Exibir cartas
    printf("\n=== CARTAS CADASTRADAS ====\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosT1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPC1);

    printf("\n--- CARTA 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosT2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPC2);

    // ================================
    // MENU 1
    // ================================
    int op1, op2;

    printf("\n\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &op1);

    // ================================
    // MENU 2 DINAMICO
    // ================================
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    if (op1 != 1) printf("1 - Populacao\n");
    if (op1 != 2) printf("2 - Area\n");
    if (op1 != 3) printf("3 - PIB\n");
    if (op1 != 4) printf("4 - Pontos Turisticos\n");
    if (op1 != 5) printf("5 - Densidade Demografica\n");
    if (op1 != 6) printf("6 - PIB per Capita\n");

    printf("Escolha: ");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // ================================
    // PEGAR OS VALORES ESCOLHIDOS
    // ================================
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    char atributo1[30];
    char atributo2[30];

    // ATRIBUTO 1
    switch (op1) {
        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            sprintf(atributo1, "Populacao");
            break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            sprintf(atributo1, "Area");
            break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            sprintf(atributo1, "PIB");
            break;

        case 4:
            valor1_carta1 = pontosT1;
            valor1_carta2 = pontosT2;
            sprintf(atributo1, "Pontos Turisticos");
            break;

        case 5:
            valor1_carta1 = densidade1;
            valor1_carta2 = densidade2;
            sprintf(atributo1, "Densidade");
            break;

        case 6:
            valor1_carta1 = pibPC1;
            valor1_carta2 = pibPC2;
            sprintf(atributo1, "PIB per Capita");
            break;

        default:
            printf("\nOpcao invalida no atributo 1!\n");
            return 0;
    }

    // ATRIBUTO 2
    switch (op2) {
        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            sprintf(atributo2, "Populacao");
            break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            sprintf(atributo2, "Area");
            break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            sprintf(atributo2, "PIB");
            break;

        case 4:
            valor2_carta1 = pontosT1;
            valor2_carta2 = pontosT2;
            sprintf(atributo2, "Pontos Turisticos");
            break;

        case 5:
            valor2_carta1 = densidade1;
            valor2_carta2 = densidade2;
            sprintf(atributo2, "Densidade");
            break;

        case 6:
            valor2_carta1 = pibPC1;
            valor2_carta2 = pibPC2;
            sprintf(atributo2, "PIB per Capita");
            break;

        default:
            printf("\nOpcao invalida no atributo 2!\n");
            return 0;
    }

    // ================================
    // COMPARAR CADA ATRIBUTO
    // ================================
    int vencedorAtributo1;
    int vencedorAtributo2;

    // Comparação do atributo 1
    if (op1 == 5) { // densidade: menor vence
        if (valor1_carta1 < valor1_carta2)
            vencedorAtributo1 = 1;
        else
            vencedorAtributo1 = 2;
    } else {
        if (valor1_carta1 > valor1_carta2)
            vencedorAtributo1 = 1;
        else
            vencedorAtributo1 = 2;
    }

    // Comparação do atributo 2
    if (op2 == 5) { // densidade: menor vence
        if (valor2_carta1 < valor2_carta2)
            vencedorAtributo2 = 1;
        else
            vencedorAtributo2 = 2;
    } else {
        if (valor2_carta1 > valor2_carta2)
            vencedorAtributo2 = 1;
        else
            vencedorAtributo2 = 2;
    }

    // ================================
    // SOMAR OS DOIS ATRIBUTOS
    // ================================
    float somaCarta1 = valor1_carta1 + valor2_carta1;
    float somaCarta2 = valor1_carta2 + valor2_carta2;

    // ================================
    // RESULTADO FINAL
    // ================================
    printf("\n\n=== RESULTADO DA COMPARACAO ===\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nAtributo 1: %s\n", atributo1);
    printf("%s: %.2f\n", cidade1, valor1_carta1);
    printf("%s: %.2f\n", cidade2, valor1_carta2);
    printf("Vencedor atributo 1: Carta %d\n", vencedorAtributo1);

    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f\n", cidade1, valor2_carta1);
    printf("%s: %.2f\n", cidade2, valor2_carta2);
    printf("Vencedor atributo 2: Carta %d\n", vencedorAtributo2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, somaCarta1);
    printf("%s: %.2f\n", cidade2, somaCarta2);

    if (somaCarta1 > somaCarta2)
        printf("\nVENCEDOR FINAL: %s\n", cidade1);
    else if (somaCarta2 > somaCarta1)
        printf("\nVENCEDOR FINAL: %s\n", cidade2);
    else
        printf("\nEMPATE!\n");

    return 0;
}
