#include <stdio.h>
#include "totaller.h"

float total = 0.0;
short count = 0;
short tax_percent = 6;


int main() {
    float value;

    printf("Preço do item: ");
    while (scanf("%f", &value) == 1) {
        printf("Total até o momento: R$ %.2f\n", add_with_tax(value));
        printf("Preço do item: ");
    }

    printf("\nTotal: R$ %.2f\n", total);
    printf("Quantidade de itens: %hi\n", count);

    return 0;
}

float add_with_tax(float value) {
    float tax_rate = 1 + tax_percent / 100.0;
    total = total + (value * tax_rate);
    count++;
    return total;
}
