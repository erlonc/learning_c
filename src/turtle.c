#include <stdio.h>

typedef struct {
    const char *name;
    const char *specie;
    int age;
} turtle;

void happy_birthday(turtle *t) {
    t -> age = t -> age + 1; // (*t).age = (*t).age + 1;
    printf("Feliz aniversário %s! Você agora tem %d anos!\n", t -> name, (*t).age);
}

int main() {
    turtle myrtle = {"Myrtle", "Tartaruga de couro", 99};
    happy_birthday(&myrtle);
    printf("A idade de %s agora é %d anos.\n", myrtle.name, myrtle.age);

    return 0;
}
