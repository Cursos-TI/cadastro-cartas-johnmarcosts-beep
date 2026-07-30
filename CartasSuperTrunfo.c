#include <stdio.h>
int main() {

    //carta1
    char estado1[3];
    char codigo1[3];
    char cidade1[50];
    unsigned long int populaçao1;
    float area1;
    float pib1;
    int pontos1;

    //carta2
    char estado2[3];
    char codigo2[3];
    char cidade2[50];
    unsigned long int populaçao2;
    float area2;
    float pib2;
    int pontos2;

    // variaveis de caulculo
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superpoder1, superpoder2;

    // carta1
    printf("Digite o estado da primeira carta: "); 

    printf("estado (sigla): ");
    scanf("%s", estado1);

    printf("codigo: ");
    scanf("%s", codigo1);
    
    printf("cidade: ");
    scanf(" %[^\n]s", cidade1);

    printf("populaçao: ");
    scanf("%lu", &populaçao1);

    printf("area km²: ");
    scanf("%f", &area1);

    printf("pib: ");
    scanf("%f", &pib1); 

    printf("pontos: ");
    scanf("%d", &pontos1);

    // carta2

    printf("Digite o estado da segunda carta: ");

    printf("estado (sigla): ");
    scanf("%s", estado2);

    printf("codigo: ");
    scanf("%s", codigo2);       

    printf("cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("populaçao: ");
    scanf("%lu", &populaçao2);
    
    printf("area km²: ");
    scanf("%f", &area2);

    printf("pib: ");
    scanf("%f", &pib2);
    
    printf("pontos: ");
    scanf("%d", &pontos2);

    
    // calculos

    densidade1 = populaçao1 / area1;
    densidade2 = populaçao2 / area2; 

    pibPerCapita1 = pib1 / populaçao1;
    pibPerCapita2 = pib2 / populaçao2;  

    superpoder1 = (float) populaçao1 +
                   area1 + 
                   pib1 + 
                   pontos1+
                   pibPerCapita1 +
                   (1.0f / densidade1);

    superpoder2 = (float) populaçao2 +
                    area2 +
                    pib2 +
                    pontos2 +
                    pibPerCapita2 +
                    (1.0f / densidade2);

                    // exibir cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos: %d\n", pontos1); 
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Superpoder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos: %d\n", pontos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Superpoder: %.2f\n", superpoder2);

    // comparar superpoderes

    printf(" comparação de cartas\n");

    printf("população: %d\n", populaçao1 > populaçao2);
    printf("area: %d\n", area1 > area2);
    printf("pib: %d\n", pib1 > pib2);
    printf("pontos: %d\n", pontos1 > pontos2);
    printf("densidade: %d\n", densidade1 > densidade2);

    // menos densidadevence

    printf("debsudade : %d\n", densidade1 < densidade2);

    printf(" pib per capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("superpoder: %d\n", superpoder1 > superpoder2);

    return 0;
}

                   
                   
