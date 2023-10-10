#include <stdio.h>

typedef union {
    short count;
    float weight;
    float volume;
} quantity;


int main() {
    quantity q = {.weight=4.5};
    q.count = 4;
    q.volume = 3.7;


    printf("Count: %d   Weight: %f   volume: %f\n", q.count, q.weight, q.volume);
    return 0;
}
