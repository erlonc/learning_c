#include <stdio.h>

typedef struct {
    const char *description;
    float value;
} swag;

typedef struct {
    swag *swag;
    const char *sequence;
} combination;

typedef struct {
    combination numbers;
    const char *make;
} safe;

int main() {
    swag gold = {"ROSE GOLD!", 1000000.0};
    combination numbers = {&gold, "88A7KLP54"};
    safe box_safe = {numbers, "RAMACON250"};

    printf("Conteúdo = %s\n", box_safe.numbers.swag -> description);
    return 0;
}
