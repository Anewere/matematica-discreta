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
    int conjunto_a[tam_a], conjunto_b[tam_b];

    //preenche o conjunto_a com numeros para que tenha cardinalidade 20
    for (i = 0; i < tam_a; i++) {
        int elemento_de_a = rand() % 50;
        //verifica se o elemento já está no conjunto e o recria se ja existir
        if (array_elemento(elemento_de_a, conjunto_a, tam_a)) {
            --i;
        } else {
            conjunto_a[i] = elemento_de_a;
        }
    }
    //exibe conjunto_a
    array_exibe(conjunto_a, tam_a);

    //preenche o conjunto_b com numeros para que tenha cardinalidade 5
    for (i = 0; i < tam_b; i++) {
        int elemento_de_b = rand() % 50;
        //verifica se o elemento já está no conjunto e o recria se ja existir
        if (array_elemento(elemento_de_b, conjunto_b, tam_b)) {
            --i;
        } else {
            conjunto_b[i] = elemento_de_b;
        }
    }
    //exibe conjunto_b
    printf("\n");
    array_exibe(conjunto_b, tam_b);

    return 0;
}
