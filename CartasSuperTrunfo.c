#include <stdio.h>

int main(){

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado[50], codigo[50], nome_cidade[50], estado2[50], codigo2[50], nome_cidade2[50];
    int populacao, turisticos, populacao2, turisticos2;
    float area, pib, area2, pib2;

        // Solicitação de dados da carta 01
    
        printf("Digite uma letra entra A e H representando um estado: \n");
        scanf("%s", estado);
        printf("Insira o código da carta: \n");
        scanf("%s", codigo);
        printf("Insira o nome da cidade: \n");
        scanf(" %49[^\n]", nome_cidade);
        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao);
        printf("Digite a área (em km2) da cidade: \n");
        scanf("%f", &area);
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib);
        printf("Digite a quantidade de pontos turísticos da cidade: \n\n");
        scanf("%d", &turisticos);

        printf("AGORA VOCÉ IRÁ INCERRIR OS DADOS DA SEGUNDA CARTA\n\n");

        // Solicitação de dados da carta 02

        printf("Digite uma letra entra A e H representando um estado: \n");
        scanf("%s", estado2);
        printf("Insira o código da carta: \n");
        scanf("%s", codigo2);
        printf("Insira o nome da cidade: \n");
        scanf(" %49[^\n]", nome_cidade2);
        printf("Digite a população da cidade: \n");
        scanf("%d", &populacao2);
        printf("Digite a área (em km2) da cidade: \n");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade: \n");
        scanf("%f", &pib2);
        printf("Digite a quantidade de pontos turísticos da cidade: \n\n");
        scanf("%d", &turisticos2);
        
        // Imprimindo as informações

        printf("Carta 1\nEstado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de pontos Turísticos: %d\n\n", estado, codigo, nome_cidade, populacao, area, pib / 1000000000.0, turisticos);
        printf("Carta 1\nEstado: %s\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\nNúmero de pontos Turísticos: %d\n\n", estado2, codigo2, nome_cidade2, populacao2, area2, pib2 / 1000000000.0, turisticos2);


}