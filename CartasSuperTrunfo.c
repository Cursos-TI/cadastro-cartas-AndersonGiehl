#include <stdio.h>

int main(){
    char estado[50], codigo[50], nome_cidade[50], estado2[50], codigo2[50], nome_cidade2[50];
    int turisticos, turisticos2, populacao, populacao2;
    float area, pib, area2, pib2, densidade, densidade2, percapita, percapita2;

    // Solicitação de dados da carta 01
    printf("Digite uma letra entre A e H representando um estado: \n");
    scanf("%s", estado);
    printf("Insira o código da carta: \n");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: \n");
    scanf(" %49[^\n]", nome_cidade);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Digite a área (em km2) da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB (em Bilhões) da cidade: \n");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos);

    printf("AGORA VOCÊ IRÁ INSERIR OS DADOS DA SEGUNDA CARTA\n\n");

    // Solicitação de dados da carta 02
    printf("Digite uma letra entre A e H representando um estado: \n");
    scanf("%s", estado2);
    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: \n");
    scanf(" %49[^\n]", nome_cidade2);
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (em km2) da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em Bilhões) da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &turisticos2);

    // Cálculos
    densidade  = (float)populacao  / area;
    densidade2 = (float)populacao2 / area2;
    percapita  = (pib  * 1000000000.0f) / (float)populacao;
    percapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    float super_poder  = (float)populacao  + area  + pib  + (float)turisticos  + percapita  + (1.0f / densidade);
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + percapita2 + (1.0f / densidade2);

    // Imprimindo as informações
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: R$%.2f\n", percapita);
    printf("Número de pontos Turísticos: %d\n", turisticos);
    printf("Super Poder: %.2f\n\n", super_poder);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", percapita2);
    printf("Número de pontos Turísticos: %d\n", turisticos2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    // Comparações — resultado: 1 = Carta 1 vence, 0 = Carta 2 vence
    printf("=== Resultado das Comparações ===\n");
    printf("Populacao              - Carta 1 vence: %d\n", populacao > populacao2);
    printf("Area                   - Carta 1 vence: %d\n", area > area2);
    printf("PIB                    - Carta 1 vence: %d\n", pib > pib2);
    printf("Pontos Turisticos      - Carta 1 vence: %d\n", turisticos > turisticos2);
    printf("PIB per Capita         - Carta 1 vence: %d\n", percapita > percapita2);
    printf("Densidade Populacional - Carta 1 vence: %d\n", densidade < densidade2);
    printf("Super Poder            - Carta 1 vence: %d\n", super_poder > super_poder2);

    return 0;
}