#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ordena valores inteiros em ordem crescente.
int compare_scores(const void* score_a, const void* score_b) {
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return a - b;
}

// ordena valores inteiros em ordem decrescente.
int compare_scores_desc(const void* score_a, const void* score_b) {
    int a = *(int*)score_a;
    int b = *(int*)score_b;
    return b - a;
}

// ordenar os retângulos por área, em ordem crescente.
typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas_rect(const void* a, const void* b) {
    rectangle* rect_a = (rectangle*)a;
    rectangle* rect_b = (rectangle*)b;
    int area_a = (rect_a->width * rect_a->height);
    int area_b = (rect_b->width * rect_b->height);
    return area_a - area_b;
}

// Ordene os retângulos por áreas em ordem decrescente.
int compare_areas_desc(const void* a, const void* b) {
    return compare_areas_rect(b, a);
}

// Ordenar uma lista de nomes em ordem alfabética.
// Diferenciação de letras maiúsculas e minúsculas.
int compare_names(const void* a, const void* b) {
    char** str_a = (char**)a;
    char** str_b = (char**)b;
    return strcmp(*str_a, *str_b);
}

// Ordene uma lista de nomes em ordem alfabética reversa.
// Diferenciação de letras maiúsculas e minúsculas.
int compare_names_desc(const void* a, const void* b) {
    return compare_names(b, a);
}

// comprimento de um array
int length_array(unsigned size_array, unsigned size_array_element) {
    return size_array / size_array_element;
}

int main() {
    int scores[] = {543, 323, 32, 554, 11, 3, 112};
    int length_scores = length_array(sizeof(scores), sizeof(scores[0]));

    qsort(scores, length_scores, sizeof(int), compare_scores_desc);

    puts("Estas são as pontuações em ordem:");
    for (int i = 0; i < length_scores; i++)
        printf("Ponto: %d\n", scores[i]);


    char *names[] = {"Karen", "Mark", "Brett", "Molly"};
    int lenght_names = length_array(sizeof(names), sizeof(names[0]));

    qsort(names, lenght_names, sizeof(char*), compare_names);

    puts("Esses são os nomes em ordem:");
    for (int i = 0; i < lenght_names; i++)
        printf("%s\n", names[i]);

    return 0;
}
