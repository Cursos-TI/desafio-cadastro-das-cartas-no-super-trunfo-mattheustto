#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // ATENÇÃO: População agora deve ser unsigned long int (para suportar números grandes).

    // carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;  
    float area1;
    float pib1; // em bilhões
    int pontosTuristicos1;
    float densidade1;
    float pibPercapita1;
    float superPoder1; 

    // carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;  
    float area2;
    float pib2; 
    int pontosTuristicos2;
    float densidade2;
    float pibPercapita2;
    float superPoder2; 

    // variáveis para guardar os vencedores das comparações
    char *vencedorPopulacao;
    char *vencedorArea;
    char *vencedorPIB;
    char *vencedorPontos;
    char *vencedorDensidade;
    char *vencedorPIBperCapita;
    char *vencedorSuperPoder;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1 \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1:
    densidade1 = (float)populacao1 / area1;
    pibPercapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPercapita1 + (1.0 / densidade1);

   // Carta 2
    printf("\nCadastro da Carta 2 \n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2:
    densidade2 = (float)populacao2 / area2;
    pibPercapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPercapita2 + (1.0 / densidade2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

    // Carta 1 
    printf("\nCarta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidade1);
    printf("PIB per capita: %.2f reais \n", pibPercapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    //Carta 2 
    printf("\nCarta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidade2);
    printf("PIB per capita: %.2f reais \n", pibPercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações:
    // Para densidade populacional, vence a carta com MENOR valor
    // Para os demais atributos, vence a carta com MAIOR valor
    vencedorPopulacao     = (populacao1 > populacao2) ? "Carta 1" : "Carta 2";
    vencedorArea          = (area1 > area2) ? "Carta 1" : "Carta 2";
    vencedorPIB           = (pib1 > pib2) ? "Carta 1" : "Carta 2";
    vencedorPontos        = (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2";
    vencedorDensidade     = (densidade1 < densidade2) ? "Carta 1" : "Carta 2";
    vencedorPIBperCapita  = (pibPercapita1 > pibPercapita2) ? "Carta 1" : "Carta 2";
    vencedorSuperPoder    = (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2";

    printf("\n===== Comparação de Cartas =====\n");
    printf("População: %s venceu\n", vencedorPopulacao);
    printf("Área: %s venceu\n", vencedorArea);
    printf("PIB: %s venceu\n", vencedorPIB);
    printf("Pontos Turisticos: %s venceu\n", vencedorPontos);
    printf("Densidade Populacional: %s venceu\n", vencedorDensidade);
    printf("PIB per Capita: %s venceu\n", vencedorPIBperCapita);
    printf("Super Poder: %s venceu\n", vencedorSuperPoder);

      // Comparação de UM atributo (População, neste exemplo)
    printf("\n===== Comparação de Cartas =====\n");
    printf("Atributo escolhido: População\n");
    printf("Carta 1 (%s) - População: %lu\n", nomeCidade1, populacao1);
    printf("Carta 2 (%s) - População: %lu\n", nomeCidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu na População!\n");
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu na População!\n");
    } else {
        printf("Resultado: Empate na População!\n");
    }

    

    return 0;
}
