#include <stdio.h>

struct Carta {
    char state;
    int cidade;
    int population;
    float area;
    float pib;
    int turist_location
};

int main() {
    struct Carta carta1, carta2;
    
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A a H): ");
    scanf_s(" %c", &carta1.state, 1);  
    printf("Cidade (1 a 4): ");
    scanf_s("%d", &carta1.cidade);
    printf("População: ");
    scanf_s("%d", &carta1.population);
    printf("Área (em km²): ");
    scanf_s("%f", &carta1.area);
    printf("PIB: ");
    scanf_s("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf_s("%d", &carta1.turist_location);
    

    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A a H): ");
    scanf_s(" %c", &carta2.state, 1);  // scanf_s usa o tamanho do buffer como parâmetro para char
    printf("Cidade (1 a 4): ");
    scanf_s("%d", &carta2.cidade);
    printf("População: ");
    scanf_s("%d", &carta2.population);
    printf("Área (em km²): ");
    scanf_s("%f", &carta2.area);
    printf("PIB: ");
    scanf_s("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf_s("%d", &carta2.turist_location);

    printf("\nDados da primeira carta:\n");
    printf("Código da carta: %c%02d\n", carta1.state, carta1.cidade);
    printf("População: %d\n", carta1.population);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.turist_location);
   
    printf("\nDados da segunda carta:\n");
    printf("Código da carta: %c%02d\n", carta2.state, carta2.cidade);
    printf("População: %d\n", carta2.population);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.turist_location);
    return 0;
}
