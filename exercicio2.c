#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_a 20
#define tam_b 5
#include "functions.c"
#include <stdbool.h>

int main() {

    srand(time(NULL));
    int i, j;

    int conjunto_a[20]; //, conjunto_b[5];

    //percorre o conjunto_a
    for (i = 0; i < tam_a; i++) {
    }

    printf("%d", array_elemento(7, conjunto_a, 3));

    return 0;
}
