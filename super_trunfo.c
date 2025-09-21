// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //variaveis utilizadas no programa
    char codigo1[15];
    char codigo2[15];
    char cidade1[30];
    char cidade2[30];
    int populacao1;
    int populacao2;
    int pontosTuristicos1;
    int pontosTuristicos2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    double densidadePopulacional1;
    double densidadePopulacional2;
    double pibPerCapta1;
    double pibPerCapta2;
    
    // recebe as informações da Carta 1
    printf("Digite abaixo as informações da Carta 1\n");
    
    printf("Código: \n");
    scanf("%s", &codigo1);
    
    printf("Cidade: \n");
    scanf("%s", &cidade1);
    
    printf("População (milhões): \n");
    scanf("%d", &populacao1);
    
    printf("Área (m2): \n");
    scanf("%f", &area1);
    
    printf("PIB (R$ bilhões): \n");
    scanf("%f", &pib1);
    
    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    printf("--------------------------------------------\n");
    // recebe as informações da Carta 2
    printf("Digite abaixo as informações da Carta 2\n");
    
    printf("Código: \n");
    scanf("%s", &codigo2);
    
    printf("Cidade: \n");
    scanf("%s", &cidade2);
    
    printf("População (milhões): \n");
    scanf("%d", &populacao2);
    
    printf("Área (m2): \n");
    scanf("%f", &area2);
    
    printf("PIB (R$ bilhões): \n");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    printf("============================================\n");
    
    //Imprime as informações da Carta 1
    printf("Carta 1:\n Código: %s\n Nome da Cidade: %s\n População: %d milhões\n Área: %.2f m2\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapta1 = pib1 / populacao1;
    printf("Densidade populacional da Carta 1: %.2lf\n", densidadePopulacional1);
    printf("PIB per capta da Carta 1: %.2lf\n", pibPerCapta1);
    
    printf("--------------------------------------------\n");
    
    //Imprime as informações da Carta 2
    printf("Carta 2:\n Código: %s\n Nome da Cidade: %s\n População: %d milhões\n Área: %.2f m2\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    printf("Densidade populacional da Carta 2: %.2lf\n", densidadePopulacional2);
    printf("PIB per capta da Carta 2: %.2lf\n", pibPerCapta2);

    printf("Combate: \n");
    printf("Quem tem a maior população?\n");

    // Decide qual cidade vence comparando sua população
    if (populacao1 > populacao2) {
        printf("Vencedor: %s venceu!!!\n", cidade1);
    } else {
        printf("Vencedor: %s venceu!!!\n", cidade2);
    }
    
    return 0;
}