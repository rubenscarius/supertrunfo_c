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

    printf("\n");
    printf("============================================\n");
    printf("\n");

    printf("Combate: \n");
    printf("Escolha 2 atributos diferentes para serem comparados.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Sair do jogo==>\n");
    printf("\n");

    // Atributos escolhidos pelo usuário a serem usado na soma dos valores
    int carta1Atributo1;
    int carta1Atributo2;
    int carta2Atributo1;
    int carta2Atributo2;

    // Recebe a entrada de dado dos inteiros escolhido pelo usuário
    printf("Escolha o primeiro: \n");
    int escolha1;
    scanf("%d", &escolha1);

    printf("Escolha o segundo: \n");
    int escolha2;
    scanf("%d", &escolha2);

    // Veerifica se os atributos escolhidos são iguais
    if (escolha1 == escolha2) {
        printf("Escolha atributos diferentes\n");
        return 0;
    }

    // realiza a comparação com código de acordo com a 1° escolha do usuário
    switch (escolha1) {
        case 1:
            if (populacao1 == populacao2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = populacao1;
                carta2Atributo1 = populacao2;
                break;
            }
            populacao1 > populacao2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = populacao1;
            carta2Atributo1 = populacao2;
            break;
        case 2:
            if (area1 == area2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = area1;
                carta2Atributo1 = area2;
                break;
            }
            area1 > area2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = area1;
            carta2Atributo1 = area2;
            break;
        case 3:
            if (pib1 == pib2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = pib1;
                carta2Atributo1 = pib2;
                break;
            }
            pib1 > pib2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = pib1;
            carta2Atributo1 = pib2;
            break;
        case 4:
            if (pontosTuristicos1 == pontosTuristicos2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = pontosTuristicos1;
                carta2Atributo1 = pontosTuristicos2;
                break;
            }
            pontosTuristicos1 > pontosTuristicos2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = pontosTuristicos1;
            carta2Atributo1 = pontosTuristicos2;
            break;
        case 5:
            if (densidadePopulacional1 == densidadePopulacional2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = densidadePopulacional1;
                carta2Atributo1 = densidadePopulacional2;
                break;
            }
            densidadePopulacional1 < densidadePopulacional2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = densidadePopulacional1;
            carta2Atributo1 = densidadePopulacional2;
            break;
        case 6:
            if (pibPerCapta1 == pibPerCapta2) {
                printf("EMPATE !!!\n");
                carta1Atributo1 = pibPerCapta1;
                carta2Atributo1 = pibPerCapta2;
                break;
            }
            pibPerCapta1 > pibPerCapta2 ? printf("Vencedor atributo 1: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 1: %s venceu!!!\n", cidade2);
            carta1Atributo1 = pibPerCapta1;
            carta2Atributo1 = pibPerCapta2;
            break;
        case 7:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Entrada inválida.\n");
    }

    // realiza a comparação com código de acordo com a 2° escolha do usuário
    switch (escolha2) {
        case 1:
            if (populacao1 == populacao2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = populacao1;
                carta2Atributo2 = populacao2;
                break;
            }
            populacao1 > populacao2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = populacao1;
            carta2Atributo2 = populacao2;
            break;
        case 2:
            if (area1 == area2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = area1;
                carta2Atributo2 = area2;
                break;
            }
            area1 > area2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = area1;
            carta2Atributo2 = area2;
            break;
        case 3:
            if (pib1 == pib2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = pib1;
                carta2Atributo2 = pib2;
                break;
            }
            pib1 > pib2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = pib1;
            carta2Atributo2 = pib2;
            break;
        case 4:
            if (pontosTuristicos1 == pontosTuristicos2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = pontosTuristicos1;
                carta2Atributo2 = pontosTuristicos2;
                break;
            }
            pontosTuristicos1 > pontosTuristicos2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = pontosTuristicos1;
            carta2Atributo2 = pontosTuristicos2;
            break;
        case 5:
            if (densidadePopulacional1 == densidadePopulacional2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = densidadePopulacional1;
                carta2Atributo2 = densidadePopulacional2;
                break;
            }
            densidadePopulacional1 < densidadePopulacional2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = densidadePopulacional1;
            carta2Atributo2 = densidadePopulacional2;
            break;
        case 6:
            if (pibPerCapta1 == pibPerCapta2) {
                printf("EMPATE !!!\n");
                carta1Atributo2 = pibPerCapta1;
                carta2Atributo2 = pibPerCapta2;
                break;
            }
            pibPerCapta1 > pibPerCapta2 ? printf("Vencedor atributo 2: %s venceu!!!\n", cidade1) : printf("Vencedor atributo 2: %s venceu!!!\n", cidade2);
            carta1Atributo2 = pibPerCapta1;
            carta2Atributo2 = pibPerCapta2;
            break;
        case 7:
            printf("Saindo do jogo...\n");
            return 0;
            break;
        default:
            printf("Entrada inválida.\n");
    }

    // Soma os valores dos 2 atributos escolhidos
    int somaAtributosCarta1 = carta1Atributo1 + carta1Atributo2;
    int somaAtributosCarta2 = carta2Atributo1 + carta2Atributo2;

    // Compara qual carta vence na soma dos atributos
    if (somaAtributosCarta1 > somaAtributosCarta2) {
        printf("Carta 1 %s venceu o jogo!!!\n", cidade1);
    } else if (somaAtributosCarta1 == somaAtributosCarta2) {
        printf("EMPATE !?!?\n");
    } else {
        printf("Carta 2 %s venceu o jogo!!!\n", cidade2);
    }
    
    return 0;
}