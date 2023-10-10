#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *specie;
    int teeth;
    int age;
    struct preferences care;
};

struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"carne", 0.2}, {"nadar na jacuzzi", 7.5}}};

void label(struct fish f) {
    printf("Nome: %s\nEspécie: %s\n%d anos, %d dentes\n",
            f.name, f.specie, f.age, f.teeth);
    printf("Alimente com %.2f kg de %s e deixa %s por %.2f horas.\n",
            f.care.food.weight, f.care.food.ingredients, f.care.exercise.description, f.care.exercise.duration);
}

int main() {
    label(snappy);

    return 0;
}
