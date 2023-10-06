#include <stdio.h>
#include <string.h>

// argc: contém a contagem do números de elementos do array argv
// argv[0]: nome do programa que foi executado pelo usuário
int main(int argc, char *argv[]) {
    char line[80];

    if (argc != 6) {
        fprintf(stderr, "Você precisa passar 5 argumentos.\n");
        return 1;
    }

    FILE *in;
    // se houver um problema ao abrir um fluxo de dados a função fopen() retorna o valor 0.
    if (!(in = fopen("bermudas_geo.csv", "r"))) {
        fprintf(stderr, "Não consigo abrir o arquivo.\n");
        return 1;
    };

    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, argv[1]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[3]))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }

    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}
