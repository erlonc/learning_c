#include <stdio.h>
#include <stdbool.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    bool starded = false;

    puts("{\n  \"data\": [");

    // scanf retorna o número de valores que conseguiu ler
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) {
        if (starded)
            printf(",\n");
         else
            starded = true;

        if ((latitude < -90) ||(latitude > 90)) {
            fprintf(stderr, "Latitude inválida: %f\n", latitude);
            return 2;
        }
        if ((longitude < -180) || (longitude > 180)) {
            fprintf(stderr, "Longitude inválida: %f\n", longitude);
            return 2;
        }

        printf("    {\"latidute\": %f, \"longitude\": %f, \"info\": \"%s\"}", latitude, longitude, info);
    }

    puts("\n  ]\n}");

    return 0;
}
