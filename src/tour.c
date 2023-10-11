#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct island {
    char *name;
    char *open;
    char *close;
    struct island *next;
} island;


// função retorna o endereço de um struct: island*
island* create(char *name) {
    island *i = malloc(sizeof(island));
    i->name = strdup(name);
    i->open = "09:00";
    i->close = "17:00";
    i->next = NULL;
    return i;
}

// libera toda memória utilizada por uma lista encadeada
void release(island *start) {
    island *i = start;
    island *next = NULL;
    for (; i != NULL; i = next) {
        next = i->next;
        free(i->name);
        free(i);
    }
}


void display(island *start) {
    for (island *i = start; i != NULL; i = i->next) {
        printf("Name: %s Open: %s-%s\tNext address: %p\n", i->name, i->open, i->close, i->next);
    }
}


int main() {
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;

    char name[80];

    for (; fgets(name, sizeof(name), stdin) != NULL; i = next) {
        next = create(name);
        if (start == NULL)
            start = next;
        if (i != NULL)
            i->next = next;
    }

    display(start);
    release(start);

    return 0;
}
