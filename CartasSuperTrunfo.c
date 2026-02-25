#include <stdio.h>

// Desafio Super Trunfo - Países
//comparar um atributo.

int main() {

    // Declaração das variáveis
    char Estado1[50], Estado2[50];
    char Codigo_da_Carta1[5], Codigo_da_Carta2[5];
    char Cidade1[50], Cidade2[50];
    int População1, População2;
    float Area_Territorial1, Area_Territorial2;
    float PIB1, PIB2;
    int Pontos_Turisticos1, Pontos_Turisticos2;
    float PIB_per_Capita1, PIB_per_Capita2;
    float Densidade_Populacional1, Densidade_Populacional2;

    // Entrada Carta 1

    printf("Insira os dados da primeira carta:\n\n");

    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", Codigo_da_Carta1);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &População1);

    printf("Digite a Area Territorial em Km2: \n");
    scanf("%f", &Area_Territorial1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos1);

    // Entrada Carta 2

    printf("\nInsira os dados da segunda carta:\n\n");

    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", Codigo_da_Carta2);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &População2);

    printf("Digite a Area Territorial em Km2: \n");
    scanf("%f", &Area_Territorial2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos_Turisticos2);

    // Cálculos

    Densidade_Populacional1 = População1 / Area_Territorial1;
    Densidade_Populacional2 = População2 / Area_Territorial2;

    PIB_per_Capita1 = PIB1 / População1;
    PIB_per_Capita2 = PIB2 / População2;

    // Exibição dos dados

    printf("\nCarta 1\n");
    printf("Estado: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n\n",
           Estado1, Cidade1, População1, Area_Territorial1, PIB1,
           Pontos_Turisticos1, Densidade_Populacional1, PIB_per_Capita1);

    printf("Carta 2\n");
    printf("Estado: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n\n",
           Estado2, Cidade2, População2, Area_Territorial2, PIB2,
           Pontos_Turisticos2, Densidade_Populacional2, PIB_per_Capita2);

    // Comparação de APENAS UM atributo
    // Atributo escolhido: POPULAÇÃO

    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", Cidade1, Estado1, População1);
    printf("Carta 2 - %s (%s): %d\n\n", Cidade2, Estado2, População2);

    if (População1 > População2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    } 
    else if (População2 > População1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
