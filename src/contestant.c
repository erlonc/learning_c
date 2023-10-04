#include <stdio.h>

int main() {
    int contestants[] = {1, 2, 3};
    int *choice = contestants; // variável ponteiro para o primeiro elemento do array

    contestants[0] = 2; // {2, 2, 3}
    contestants[1] = contestants[2]; // {2, 3, 3}
    contestants[2] = *choice; // {2, 3, 2}

    printf("Vou escolher o concorrente número: %i\n", contestants[2]); // 2

    return 0;
}
