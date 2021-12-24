#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_a 40
#define tam_b 3
#include "functions.c"
#include <stdbool.h>

int main() {
    srand(time(NULL));
    int i;
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

    //ordena conjuntos A e B
    array_ordena(conjunto_a, tam_a);
    array_ordena(conjunto_b, tam_b);

    //exibe conjuntos A e B
    printf("conjunto A: ");
    array_exibe(conjunto_a, tam_a);
    printf("conjunto B: ");
    array_exibe(conjunto_b, tam_b);

    if (array_x_contido_y(conjunto_b, tam_b, conjunto_a, tam_a)) {
        printf("O Conjunto B está contido em A\n");
    } else {
        printf("O Conjunto B não está contido em A\n");
    }

    return 0;
}
