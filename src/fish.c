#include <stdio.h>

struct fish {
    char *name;
    char *species;
    int teeth;
    int age;
};

void catalog(struct fish f) {
    printf("%s é um(a) %s com %d dentes. Ele(a) tem %d anos.\n",
            f.name, f.species, f.teeth, f.age);
}

void label(struct fish f) {
    printf("Nome: %s\nEspécie: %s\nIdade: %d\nDentes: %d\n",
            f.name, f.species, f.age, f.teeth);
}

int main() {
    struct fish snappy = {"Snappy", "Piranha", 69, 4};
    catalog(snappy);
    label(snappy);

    return 0;
}
