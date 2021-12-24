#include <stdbool.h>
#include <stdlib.h>

//verifica se o elemento em questão está repetido no conjunto, retorna 0 se NÃO, 1 se SIM.
bool verifica_repeticao(int elemento, int *conjunto, int num_elementos) {
    //armazena se há elementos repetidos no conjunto
    bool repetido;

    /** EXCLUIR NO FINAL ESSE COMENTARIO
     * @param elemento elemento que verá se está repetido no conjunto
     * @param conjunto array com os elementos do conjunto
     * @param num_elementos numero de elementos a serem verificados a partir do elemento de indice 0. Ex.: se num_elementos = 2, então verifica indices 0 e 1;
    */

    //verifica se há elementos repetidos no conjunto

    for (int i = 0; i < num_elementos; i++) {
        if (conjunto[i] == elemento) {
            repetido = true;
            break;
        } else {
            repetido = false;
        }
    }
    return repetido;
}