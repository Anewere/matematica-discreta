#include <stdbool.h>
#include <stdlib.h>

//verifica se existe um elemento um array aquele elemento
bool array_elemento(int elemento, int conjunto[], int tam_array) {
    /** EXCLUIR NO FINAL ESSE COMENTARIO
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
    /** EXCLUIR NO FINAL ESSE COMENTARIO
     * @param array o array que erá recebido
     * @param tam_array tamanho do array que será verificado. Ex.: se tam_array = 2  {?, ?}
    */
    for (int i = 0; i < tam_array; i++) {
        printf("%d ", array[i]);
    }
}