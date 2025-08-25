#include <stdio.h>
#include <string.h>

// armazenar os dados da carta
 struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
} Carta;

int main() {
    
    Carta carta1, carta2;

    // cadastro da carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta1.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosturisticos);

    carta1.densidadepopulacional = carta1.populacao / carta1.area;
    carta1.pibpercapita = carta1.pib / carta1.populacao;

    // cadastro da carta 2

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo da carta: ");
    scanf(" %[^\n]", carta2.codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosturisticos);

    carta2.densidadepopulacional = carta2.populacao / carta2.area;
    carta2.pibpercapita = carta2.pib / carta2.populacao;

    
    // atributo para comparação: população

    printf("\nComparacao de cartas (Atributo: Populacao):\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
