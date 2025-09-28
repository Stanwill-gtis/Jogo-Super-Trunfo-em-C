#include <stdio.h>

/*
   Programa: Cadastro de duas cartas do Super Trunfo
   Requisitos:
     - Ler os dados de duas cartas (Estado, Código, Cidade, População, Área, PIB e Pontos Turísticos)
     - Armazenar em variáveis apropriadas
     - Exibir de forma clara e organizada
   Observação:
     - Não usa laços (for/while) ou estruturas de decisão (if/else)
*/

int main() {
    // =============================
    // Declaração das variáveis
    // =============================
  char estado1[50];
    char codigo1[4];
    char cidade1[50];
  float populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

  char estado2[50];
    char codigo2[4];
    char cidade2[50];
  float populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // =============================
    // Entrada de dados da Carta 1
    // =============================
    printf("Cadastro da Carta 1:\n");
  printf("Estado : \n");
    scanf(" %[^\n]", estado1);

    printf("Codigo da carta (ex: A01): \n");
    scanf(" %s", codigo1);
    getchar();

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade1);
    getchar();

  printf("Populacao: \n");
  scanf("%f", &populacao1);
  getchar();

    printf("Area (em km²): \n");
    scanf("%f", &area1);
    getchar();

    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib1);
    getchar();

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);
    getchar();

    printf("\n");

    // =============================
    // Entrada de dados da Carta 2
    // =============================
    printf("Cadastro da Carta 2:\n");
  printf("Estado (A-Z): \n");
    scanf(" %[^\n]", estado2);

    printf("Codigo da carta (ex: B02): \n");
    scanf(" %s", codigo2);
    getchar();

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", cidade2);
    getchar();

  printf("Populacao: \n");
  scanf("%f", &populacao2);
  getchar();

    printf("Area (em km²): \n");
    scanf("%f", &area2);
    getchar();

    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib2);
    getchar();

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    getchar();

    printf("\n");

    // =============================
    // Exibição dos dados
    // =============================
    printf("Carta 1:\n");
  printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %.3f\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %.3f\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

