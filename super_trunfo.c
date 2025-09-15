// Online C compiler to run C program online
#include <stdio.h>

int main() {
    //variaveis utilizadas no programa
    char estado1;
    char estado2;
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
    
    // recebe as informações da Carta 1
    printf("Digite abaixo as informações da Carta 1\n");
    printf("Estado (A a H): \n");
    scanf("%c", &estado1);
    
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
    printf("Estado (A a H): \n");
    scanf("%c", &estado2);
    
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
    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d milhões\n Área: %.2f m2\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    
    printf("--------------------------------------------\n");
    
    //Imprime as informações da Carta 2
    printf("Carta 2:\n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %d milhões\n Área: %.2f m2\n PIB: %.2f bilhões\n Pontos Turísticos: %d\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    
    return 0;
}