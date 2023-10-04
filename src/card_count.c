#include <stdio.h>
#include <stdlib.h>

int main() {

    char card_name[3];
    int count = 0;

    while(card_name[0] != 'X') {
        printf("Digite o nome da carta: ");
        scanf("%2s", card_name);

        int value = 0;

        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                value = 10;
                break;
            case'A':
                value = 11;
                break;
            case 'X':
                continue;
            default:
                value = atoi(card_name);
                if (value < 1 || value > 10) {
                    puts("- Carta inválida!\n");
                    continue;
                }
        }

        printf("O valor da carta é: %i\n", value);

        if (value >= 3 && value <= 6) {
            puts("- A contagem subiu +1");
            count++;
        } else if (value == 10) {
            puts("- A contagem caiu -1");
            count--;
        }

        printf("- Contagem atual: %i\n\n", count);
    }


    return 0;
}
