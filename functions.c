#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//verifica se existe um elemento em um array
bool array_elemento(int elemento, int conjunto[], int tam_array) {
    /** 
     * @param elemento elemento que verá se está repetido no conjunto
     * @param conjunto array com os elementos do conjunto
     * @param tam_array tamanho do array que será verificado. Ex.: se tam_array = 2, então verifica indices 0, 1 e 2;
    */

    //armazena se há elementos repetidos no conjunto
    bool repetido;

    //verifica se há elementos repetidos no conjunto
    for (int i = 0; i <= tam_array; i++) {
        if (conjunto[i] == elemento) {
            repetido = true;
            break;
        } else {
            repetido = false;
        }
    }
    return repetido;
}

//exibe um array
void array_exibe(int array[], int tam_array) {
    /** 
     * @param array o array que erá recebido
     * @param tam_array tamanho do array que será verificado. Ex.: se tam_array = 2  {?, ?}
    */
    for (int i = 0; i < tam_array; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//ordena um array de forma que ele fique crescente
void array_ordena(int array[], int tam_array) {
    /**
     * @param array o array que erá recebido
     * @param tam_array tamanho do array que será verificado. Ex.: se tam_array = 2  {?, ?}
    */

    // variaveis que armazenam o valor minimo e maximo para trocas no futuro
    int min, max, troca;

    for (int i = 0; i < tam_array; i++) {
        min = array[i];

        for (int j = i + 1; j < tam_array; j++) {
            max = array[j];
            if (max < min) {
                troca = max;
                max = min;
                min = troca;
            }
            array[i] = min;
            array[j] = max;
        }
    }
}

//verifica se o conjunto x ⊆ y
bool array_x_contido_y(int array_x[], int tam_x, int array_y[], int tam_y) {
    bool contido = false;

    //compara os elementos dos conjuntos x e y para ver se todos os elementos de x existem em y
    for (int x = 0; x < tam_x; x++) {
        for (int y = 0; y < tam_y; y++) {
            if ((array_x[x] == array_y[y])) {
                contido = true;
                break;
            } else if (y == (tam_y - 1)) {
                return false;
            }
        }
    }
    return contido;
}