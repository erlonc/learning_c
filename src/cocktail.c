#include <stdio.h>


typedef union {
    float lemon;
    int lime_pieces;
} lemon_lime;

typedef struct {
    float tequila;
    float cointreau;
    lemon_lime citrus;
} margarita;


int main() {
    margarita m1 = {2.0, 1.0, .citrus.lemon=2};
    puts("Receita 1:");
    printf("%2.1f medidas de tequila\n%2.1f medidas de contreau\n%2.1f medidas de suco\n",
            m1.tequila, m1.cointreau, m1.citrus.lemon);

    margarita m2 = {2.0, 1.0, {0.5}};
    puts("\nReceita 2:");
    printf("%2.1f medidas de tequila\n%2.1f medidas de contreau\n%2.1f medidas de suco\n\n",
            m2.tequila, m2.cointreau, m2.citrus.lemon);

    margarita m3 = {2.0, 1.0, {.lime_pieces=1}};
    puts("Receita 3:");
    printf("%2.1f medidas de tequila\n%2.1f medidas de contreau\n%d pedaços de limão\n",
            m3.tequila, m3.cointreau, m3.citrus.lime_pieces);
    return 0;
}
