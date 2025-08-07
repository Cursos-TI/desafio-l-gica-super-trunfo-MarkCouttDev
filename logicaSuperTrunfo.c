#include <stdio.h>

// Estrutura para representar uma carta de cidade
struct Carta {
    char estado;
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

// Protótipos das funções
void cadastrarCarta(struct Carta *carta, int numero);
void exibirCarta(struct Carta carta, int numero);
int compararFloat(float a, float b);
int compararInt(unsigned long int a, unsigned long int b);
void exibirResultado(int resultado, struct Carta c1, struct Carta c2, const char *atributo);

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Cadastro das cartas
    cadastrarCarta(&carta1, 1);
    cadastrarCarta(&carta2, 2);

    // Exibição completa dos dados
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Menu de comparação
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação baseada na escolha
    switch (escolha) {
        case 1:
            exibirResultado(compararInt(carta1.populacao, carta2.populacao), carta1, carta2, "População");
            break;
        case 2:
            exibirResultado(compararFloat(carta1.area, carta2.area), carta1, carta2, "Área");
            break;
        case 3:
            exibirResultado(compararFloat(carta1.pib, carta2.pib), carta1, carta2, "PIB");
            break;
        case 4:
            exibirResultado(compararInt(carta1.pontosTuristicos, carta2.pontosTuristicos), carta1, carta2, "Pontos turísticos");
            break;
        case 5:
            exibirResultado(compararFloat(carta1.densidade, carta2.densidade), carta1, carta2, "Densidade populacional");
            break;
        case 6:
            exibirResultado(compararFloat(carta1.pibPerCapita, carta2.pibPerCapita), carta1, carta2, "PIB per capita");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *carta, int numero) {
    printf("\n=== Cadastro da Carta %d ===\n", numero);
    printf("Estado (letra A a H): ");
    scanf(" %c", &carta->estado);
    printf("Código da carta: ");
    scanf("%s", carta->codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);
    printf("População: ");
    scanf("%lu", &carta->populacao);
    printf("Área (km²): ");
    scanf("%f", &carta->area);
    printf("PIB (bilhões R$): ");
    scanf("%f", &carta->pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Cálculos derivados com verificação de divisão por zero
    if (carta->area != 0)
        carta->densidade = carta->populacao / carta->area;
    else
        carta->densidade = 0;

    if (carta->populacao != 0)
        carta->pibPerCapita = (carta->pib * 1000000000) / carta->populacao;
    else
        carta->pibPerCapita = 0;
}

// Função para exibir os dados de uma carta
void exibirCarta(struct Carta carta, int numero) {
    printf("\n--- Dados da Carta %d ---\n", numero);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nome);
    printf("Estado: %c\n", carta.estado);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2f bilhões\n", carta.pib);
    printf("Pontos turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta.densidade);
    printf("PIB per capita: R$ %.2f\n", carta.pibPerCapita);
}

// Função para comparar dois valores float
int compararFloat(float a, float b) {
    if (a > b) return 1;
    else if (b > a) return 2;
    else return 0;
}

// Função para comparar dois valores inteiros
int compararInt(unsigned long int a, unsigned long int b) {
    if (a > b) return 1;
    else if (b > a) return 2;
    else return 0;
}

// Função para exibir o resultado da comparação
void exibirResultado(int resultado, struct Carta c1, struct Carta c2, const char *atributo) {
    printf("\n=== Resultado da Comparação (%s) ===\n", atributo);
    if (resultado == 1)
        printf("Carta 1 (%s) venceu!\n", c1.nome);
    else if (resultado == 2)
        printf("Carta 2 (%s) venceu!\n", c2.nome);
    else
        printf("Empate! Ambas possuem o mesmo valor de %s.\n", atributo);
}