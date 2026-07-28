#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int cidade1[100];
int pib1;
int populacao1;

    printf("Digite o nome da cidade 1: "); 
    scanf("%s", cidade1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%d", &pib1);

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

  // Área para exibição dos dados da cidade
  printf("Cidade 1: %s\n", cidade1);
  printf("PIB da cidade 1: %d\n", pib1);    
  printf("População da cidade 1: %d\n", populacao1);

  int media = (pib1 / populacao1);
  printf("Média do PIB por habitante da cidade 1: %d\n", media);

return 0;
} 
