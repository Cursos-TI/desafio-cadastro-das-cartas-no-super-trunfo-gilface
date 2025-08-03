#include <stdio.h>

int main() {
    //  Variáveis para a Carta 1
    char estado1[3]; // Usando 3 para incluir o terminador nulo
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turismo1;
    // Variáveis para os novos cálculos NIVEL AVENTUREIRO carta 1
    float densidade_populacional1;
    float renda_per_capita1;

    //  Variáveis para a Carta 2
    char estado2[3]; // Usando 3 para incluir o terminador nulo
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turismo2;
    // Variáveis para os novos cálculos  NIVEL AVENTUREIRO carta 2
    float densidade_populacional2;
    float renda_per_capita2;

    printf("Olá, Bem vindo ao Super Trunfo!\n");

     //               DADOS DA CARTA 1
    printf("\nComece Inserindo os Dados da Carta 1 abaixo:\n");

    printf("Digite o estado (sigla): ");
    scanf(" %s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%9s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%49s", &cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo1);

    //               DADOS DA CARTA 2
    printf("\nAgora, Insira os Dados da Carta 2 abaixo:\n");
    
    printf("Digite o estado (sigla): ");
    scanf(" %s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%9s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%49s", &cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo2);

    //                CÁLCULOS DIRETOS
   // Casting (float) garante que a divisão será de ponto flutuante.
    densidade_populacional1 = (float)populacao1 / area1;
    // Multiplica o PIB por 1 milhão para obter o valor real antes de dividir.
    renda_per_capita1 = (pib1 * 1000000) / populacao1;

    // Cálculos para a Carta 2 
    densidade_populacional2 = (float)populacao2 / area2;
    renda_per_capita2 = (pib2 * 1000000) / populacao2;


      //                EXIBIÇÃO DOS DADOS
  
    // Exibir os dados completos da Carta 1
    printf("\n------------------------\n");
    printf("Dados da Carta 1:\n");
    printf("------------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo1);
    // Exibindo os novos dados calculados
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Renda Per Capita: %.2f reais\n", renda_per_capita1);
    printf("------------------------\n");

    // Exibir os dados completos da Carta 2
    printf("\n------------------------\n");
    printf("Dados da Carta 2:\n");
    printf("------------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo2);
    // Exibindo os novos dados calculados
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Renda Per Capita: %.2f reais\n", renda_per_capita2);
    printf("------------------------\n");

    return 0;
}