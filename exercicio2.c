#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_a 20
#define tam_b 5
#include <stdbool.h>

//verifica se um elemento um array aquele elemento
bool array_elemento(int elemento, int conjunto[], int num_elementos) {
    //armazena se há elementos repetidos no conjunto
    bool repetido;

    /** EXCLUIR NO FINAL ESSE COMENTARIO
     * @param elemento elemento que verá se está repetido no conjunto
     * @param conjunto array com os elementos do conjunto
     * @param num_elementos numero de elementos a serem verificados a partir do elemento de indice 0. Ex.: se num_elementos = 2, então verifica indices 0 e 1;
    */

    //verifica se há elementos repetidos no conjunto

    for (int i = 0; i < num_elementos; i++) {
        printf("%d %d\n", elemento, conjunto[i]);
        if (conjunto[i] == elemento) {
            repetido = true;
            break;
        } else {
            repetido = false;
        }
    }
    return repetido;
}

int main() {

    srand(time(NULL));
    //   int i, j;

    int conjunto_a[20]; //, conjunto_b[5];

    //percorre o conjunto_a
    //for (i = 0; i < tam_a; i++) {
    //preenche o conjunto_a
    //conjunto_a[i] = rand() % 50;
    conjunto_a[0] = 8;
    conjunto_a[1] = 2;
    conjunto_a[2] = 1;

    printf("%d", verifica_repeticao(7, conjunto_a, 2));

    return 0;
}
