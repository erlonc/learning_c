#include <stdio.h>

void go_south_east(int *latitude, int *longitude) {
    (*latitude)--;
    (*longitude)++;
}

int main() {
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Avast! Agora em: [%i, %i]\n", latitude, longitude);

    return 0;
}
