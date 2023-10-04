#include <stdio.h>

int main() {
    int age;
    char first_name[20];
    char last_name[20];

    printf("Digite seu nome, sobrenome e sua idade: ");
    scanf("%19s %19s %i", first_name, last_name, &age);
    printf("Nome: %s\nSobrenome: %s\nIdade: %i\n", first_name, last_name, age);

    return 0;
}
