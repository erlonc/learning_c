#include <stdio.h>

int main() {
    char cards[] = "JQK";

    char a_card = cards[2]; // K

    cards[2] = cards[1]; // cards: {J, Q, Q}
    cards[1] = cards[0]; // cards: {j, J, Q}
    cards[0] = cards[2]; // cards: {Q, J, Q}
    cards[2] = cards[1]; // cards: {Q, J, J}
    cards[1] = a_card;   // cards: {Q, K, J};

    puts(cards);

    return 0;
}
