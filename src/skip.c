#include <stdio.h>

void skip(char *msg) {
    puts(msg + 6); // adicionar 6 ao poteiro msg vai imprimir a partir do sétimo caractere
}

int main() {
    char *msg_from_amy = "Don't call me";
    skip(msg_from_amy);
    return 0;
}
