#include <stdio.h>

struct carta {
    char estado;
    char codigo[4];
    char nome[30];
    int populacao;
    float area;
    double PIB;
    int pontosturisticos;

    // Os estados são representados por letras de A até H 
};

int main() {
    struct carta carta1, carta2;

    // Área para entrada de dados carta 1
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da primeira carta: ");
    scanf("%3s", carta1.codigo);

    printf("Digite o nome da cidade da primeira carta (sem espaços): ");
    scanf("%29s", carta1.nome);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área da primeira carta em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da primeira carta em bilhões de reais: ");
    scanf("%lf", &carta1.PIB);

    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &carta1.pontosturisticos);

    // Área para entrada de dados carta 2
    printf("\nDigite o estado da segunda carta: ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da segunda carta: ");
    scanf("%3s", carta2.codigo);

    printf("Digite o nome da cidade da segunda carta (sem espaços): ");
    scanf("%29s", carta2.nome);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área da segunda carta em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da segunda carta em bilhões de reais: ");
    scanf("%lf", &carta2.PIB);

    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &carta2.pontosturisticos);

    // Área para exibição de dados carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.3f km²\n", carta1.area);
    printf("PIB: %.3lf bilhões de reais\n", carta1.PIB);
    printf("Pontos turísticos: %d\n", carta1.pontosturisticos);

    // Área para exibição de dados carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.3f km²\n", carta2.area);
    printf("PIB: %.3lf bilhões de reais\n", carta2.PIB);
    printf("Pontos turísticos: %d\n", carta2.pontosturisticos);

    return 0;
}

