#include <stdio.h>

int main() {

    //               VARIÁVEIS DAS CARTAS
      
    // --- Variáveis para a Carta 1 ---
    char estado1[3]; 
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1; // MUDANÇA: Agora é unsigned long int
    float area1;
    float pib1;
    int pontos_turismo1;
    float densidade_populacional1;
    float renda_per_capita1;
    float super_poder1; // NOVO: Super Poder da Carta 1

    // --- Variáveis para a Carta 2 ---
    char estado2[3]; 
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2; // MUDANÇA: Agora é unsigned long int
    float area2;
    float pib2;
    int pontos_turismo2;
    float densidade_populacional2;
    float renda_per_capita2;
    float super_poder2; // NOVO: Super Poder da Carta 2

    // ===================================================
    //               LEITURA DOS DADOS
    // ===================================================

    printf("Olá, Bem vindo ao Super Trunfo - NÍVEL MESTRE!\n");

    // --- Leitura da Carta 1 ---
    printf("\nComece Inserindo os Dados da Carta 1 abaixo:\n");
    printf("Digite o estado (sigla): ");
    scanf("%2s", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1); // MUDANÇA: usa %lu para unsigned long int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo1);

    // --- Leitura da Carta 2 ---
    printf("\nAgora, Insira os Dados da Carta 2 abaixo:\n");
    printf("Digite o estado (sigla): ");
    scanf("%2s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%9s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2); // MUDANÇA: usa %lu para unsigned long int
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo2);

    
    //CÁLCULOS DOS ATRIBUTOS
    
    // --- Cálculos da Carta 1 ---
    densidade_populacional1 = (float)populacao1 / area1;
    renda_per_capita1 = (pib1 * 1000000) / (float)populacao1;
    // NOVO: Cálculo do Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turismo1 + renda_per_capita1 + (1.0f / densidade_populacional1);

    // --- Cálculos da Carta 2 ---
    densidade_populacional2 = (float)populacao2 / area2;
    renda_per_capita2 = (pib2 * 1000000) / (float)populacao2;
    // NOVO: Cálculo do Super Poder
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turismo2 + renda_per_capita2 + (1.0f / densidade_populacional2);



    //          EXIBIÇÃO DOS DADOS DAS CARTAS  
    printf("\n\n--- DADOS PROCESSADOS ---\n");
    // Dados da Carta 1
    printf("\nDados da Carta 1 (%s - %s):\n", cidade1, codigo1);
    printf("População: %lu\n", populacao1); // MUDANÇA: usa %lu
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Renda Per Capita: %.2f reais\n", renda_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Dados da Carta 2
    printf("\nDados da Carta 2 (%s - %s):\n", cidade2, codigo2);
    printf("População: %lu\n", populacao2); // MUDANÇA: usa %lu
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Renda Per Capita: %.2f reais\n", renda_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

  
    // COMPARAÇÃO E RESULTADO DA BATALHA

    printf("\n\n--- RESULTADO DA BATALHA ---\n");

    // Em C, uma comparação como (a > b) resulta em 1 se for verdadeiro, e 0 se for falso.
    int vitoria_populacao   = (populacao1 > populacao2);
    int vitoria_area        = (area1 > area2);
    int vitoria_pib         = (pib1 > pib2);
    int vitoria_pontos      = (pontos_turismo1 > pontos_turismo2);
    int vitoria_densidade   = (densidade_populacional1 < densidade_populacional2); // Menor é melhor!
    int vitoria_renda       = (renda_per_capita1 > renda_per_capita2);
    int vitoria_super_poder = (super_poder1 > super_poder2);

    // Usamos o operador ternário (condição ? valor_se_verdadeiro : valor_se_falso) para escolher o texto
    printf("População: %s (%d)\n",            (vitoria_populacao ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_populacao);
    printf("Área: %s (%d)\n",                 (vitoria_area ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_area);
    printf("PIB: %s (%d)\n",                  (vitoria_pib ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_pib);
    printf("Pontos Turísticos: %s (%d)\n",    (vitoria_pontos ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_pontos);
    printf("Densidade Populacional: %s (%d)\n",(vitoria_densidade ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_densidade);
    printf("PIB per Capita: %s (%d)\n",       (vitoria_renda ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_renda);
    printf("Super Poder: %s (%d)\n",          (vitoria_super_poder ? "Carta 1 venceu" : "Carta 2 venceu"), vitoria_super_poder);

    return 0;
}