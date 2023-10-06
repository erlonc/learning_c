#include <stdio.h>
#include <limits.h> // contém valores (max/min) para os tipos inteiros
#include <float.h>  // contém valores (max/min) para os tipos floats

int main() {
    printf("O valor máximo de INT_MAX é: %i\n", INT_MAX);
    printf("O valor mínimo de INT_MIN é: %i\n", INT_MIN);
    printf("Um inteiro ocupa: %zu bytes\n", sizeof(int));
    puts("--------------------------------------------");
    printf("O valor máximo de FLT_MAX é: %f\n", FLT_MAX);
    printf("O valor mínimo de FLT_MIN é: %.60f\n", FLT_MIN);
    printf("Um float ocupa: %zu bytes\n", sizeof(float));
    puts("--------------------------------------------");
    printf("O valor máximo de CHAR_MAX é: %d\n", CHAR_MAX);
    printf("O valor mínimo de CHAR_MIN é: %d\n", CHAR_MIN);
    printf("Um char ocupa: %zu bytes\n", sizeof(char));
    puts("--------------------------------------------");
    printf("O valor máximo de DBL_MAX é: %f\n", DBL_MAX);
    printf("O valor mínimo de DBL_MIN é: %.100f\n", DBL_MIN);
    printf("Um double ocupa: %zu bytes\n", sizeof(double));
    puts("--------------------------------------------");
    printf("O valor máximo de SHRT_MAX é: %d\n", SHRT_MAX);
    printf("O valor mínimo de SHRT_MIN é: %d\n", SHRT_MIN);
    printf("Um shorts ocupa: %zu bytes\n", sizeof(short));
    puts("--------------------------------------------");
    printf("O valor máximo de LNG_MAX é: %ld\n", LONG_MAX);
    printf("O valor mínimo de LNG_MIN é: %ld\n", LONG_MIN);
    printf("Um long ocupa: %zu bytes\n", sizeof(long));

    return 0;
}
