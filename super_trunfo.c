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
    printf("PIB per Capita da Carta 1: %.2lf\n", pibPerCapta1);
    
    printf("--------------------------------------------\n");
    
    //Imprime as informações da Carta 2
    printf("Carta 2:\n Código: %s\n Nome da Cidade: %s\n População: %d milhões\n Área: %.2f m2\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapta2 = pib2 / populacao2;
    printf("Densidade populacional da Carta 2: %.2lf\n", densidadePopulacional2);
    printf("PIB per Capita da Carta 2: %.2lf\n", pibPerCapta2);

    printf("============================================\n");
    
    printf("Combate: \n");
    printf("Escolha o atributo a ser comparado.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Sair do jogo==>\n");

    // Recebe a entrada de dado do inteiro escolhido pelo usuário
    int escolha;
    scanf("%d", &escolha);

    // realiza a comparação com código de acordo com a escolha do usuário
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 3:
            if (pib1 > pib2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 4:
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 5:
            if (densidadePopulacional1 < densidadePopulacional2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 6:
            if (pibPerCapta1 > pibPerCapta2) {
                printf("Vencedor: %s venceu!!!\n", cidade1);
            } else {
                printf("Vencedor: %s venceu!!!\n", cidade2);
            }
            break;
        case 7:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Entrada inválida.\n");
    }

    return 0;
}