#include <stdio.h>

int main() {

    char estado[10];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turismo;
    
    printf("Olá, Bem vindo ao Super Trunfo!\n");

    // Solicitar dados ao usuário para carta 1
    printf("Começe Inserindo os Dados da Carta 1 abaixo:\n");

    printf("Digite o estado (sigla): ");
    scanf(" %s", &estado); 
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade); 
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo);


    // Exibir os dados da carta1 inseridos
    printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo);

    // Solicitar dados ao usuário para carta 2
    printf("\nAgora, Insira os Dados da Carta 2 abaixo:\n");
    printf("Digite o estado (sigla): ");
    scanf(" %s", &estado);
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &cidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turismo);

    // Exibir os dados da carta2 inseridos
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turismo);
    
    
    
    // Retornar 0 para indicar que o programa terminou corretamente
    return 0;
}
