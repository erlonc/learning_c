#include <stdio.h>

int main() {
    char food[15];

    printf("Informe sua comida favorita: ");
    fgets(food, sizeof(food), stdin);
    printf("Comida favorita: %s\n", food);

    return 0;
}
