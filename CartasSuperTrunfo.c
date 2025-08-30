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

      // ===== MENU DE ATRIBUTOS =====
    int atributo1, atributo2;

    printf("\n===== Escolha o 1º atributo =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    printf("\n===== Escolha o 2º atributo (diferente do 1º) =====\n");
    for (int i = 1; i <= 6; i++) {
        if (i != atributo1) { // Menu dinâmico: não mostra o escolhido antes
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    printf("Escolha: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

    // ===== LÓGICA DE COMPARAÇÃO =====
    float valor1_attr1, valor2_attr1, valor1_attr2, valor2_attr2;
    float soma1, soma2;

    // Função para obter valor do atributo escolhido (carta1 e carta2)
    switch (atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontosTuristicos1; valor2_attr1 = pontosTuristicos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        case 6: valor1_attr1 = pibPercapita1; valor2_attr1 = pibPercapita2; break;
        default: printf("Atributo invalido!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontosTuristicos1; valor2_attr2 = pontosTuristicos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        case 6: valor1_attr2 = pibPercapita1; valor2_attr2 = pibPercapita2; break;
        default: printf("Atributo invalido!\n"); return 1;
    }

    // Regra da comparação com operador ternário
    // Se atributo for densidade, menor vence. Caso contrário, maior vence.
    float pontos1 = 0, pontos2 = 0;

    pontos1 += (atributo1 == 5) ? (valor1_attr1 < valor2_attr1) : (valor1_attr1 > valor2_attr1);
    pontos2 += (atributo1 == 5) ? (valor2_attr1 < valor1_attr1) : (valor2_attr1 > valor1_attr1);

    pontos1 += (atributo2 == 5) ? (valor1_attr2 < valor2_attr2) : (valor1_attr2 > valor2_attr2);
    pontos2 += (atributo2 == 5) ? (valor2_attr2 < valor1_attr2) : (valor2_attr2 > valor1_attr2);

    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // ===== RESULTADO =====
    printf("\n===== Resultado da Comparacao =====\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);

    printf("\nValores comparados:\n");
    printf("Atributo 1: Carta1 = %.2f | Carta2 = %.2f\n", valor1_attr1, valor2_attr1);
    printf("Atributo 2: Carta1 = %.2f | Carta2 = %.2f\n", valor1_attr2, valor2_attr2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedora: Carta 1 (%s)\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("\nVencedora: Carta 2 (%s)\n", nomeCidade2);
    } else {
        printf("\nEmpate!\n");
    }



    return 0;
}
