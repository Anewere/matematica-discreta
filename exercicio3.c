#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_par 20
#include "functions.c"
#include <stdbool.h>

//preenche o conjunto_a com numeros para que tenha 10 pares ordenados
int main() {
    srand(time(NULL));
    int i;
    int par_ordenado[tam_par];
    for (i = 0; i < 20; i++) {
        par_ordenado[i] = rand() % 4;
    }

    array_exibe(par_ordenado, tam_par);
    array_exibe_par_ordenado(par_ordenado, tam_par);

    //relfexiva, simetrica, antissimétrica, transitiva

    int a[3] = {1, 2, 3};
    int b[2] = {2, 5};
    array_x_menos_y(a, 3, b, 2);
    array_exibe(a, 3);

    return 0;
}
