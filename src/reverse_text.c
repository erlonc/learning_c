#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {
    size_t len = strlen(s);
    char *t = s + (len - 1); // pega o endereço do último caractere da string s

    while (t >= s) {
        printf("%c", *t);
        t -= 1;
    }

    puts("");
}
int main() {
    // array de poteiros
    char *juices[] = {
        "dragonfruit", "waterberry", "sharonfruit", "uglifruit",
        "rumberry", "kiwifruit", "mulberry", "strawberry",
        "blueberry", "blackberry", "starfruit"
    };

    char *a;

    puts(juices[6]); // mulberry
    print_reverse(juices[7]); // strawberry - yrrebwarts
    a = juices[2];   // poteiro para sharonfruit
    juices[2] = juices[8]; // blueberry
    juices[8] = a; // sharonfruit
    puts(juices[8]); // sharonfruit
    print_reverse(juices[(18 + 7) / 5]); // juices[5] - kiwifruit - tiurfiwik

    puts(juices[2]); // blueberry
    print_reverse(juices[9]); // blackberry - yrrebkcalb
    juices[1] = juices[3]; // uglifruit
    puts(juices[10]); // starfruit
    print_reverse(juices[1]); // uglifruit - tiurfilgu

    return 0;
}
