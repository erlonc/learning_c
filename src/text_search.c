#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to martenity",
    "The girl from Iwo Jima"
};

void find_tracks(char search_for[]) {
    for (int i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for) != NULL)
            printf("Faixa %i: %s\n", i, tracks[i]);
    }
}

int main() {
    char search_for[80];

    printf("Procurar por: ");
    fgets(search_for, sizeof(search_for), stdin);

    // fgets adiciona \n no final da string o que não corresponde a nenhum elemento em tracks
    search_for[strlen(search_for) - 1] = '\0';

    find_tracks(search_for);

    return 0;
}
