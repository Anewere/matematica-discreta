#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam_par_ordenado 20
#define tam_conj_universo 4
#include "functions.c"
#include <stdbool.h>

//preenche o conjunto_a com numeros para que tenha 10 pares ordenados
int main() {
    srand(time(NULL));
    int i, j;
    int par_ordenado[tam_par_ordenado];
    for (i = 0; i < 20; i++) {
        par_ordenado[i] = rand() % tam_conj_universo;
    }

    //exibe o par odenado gerado randomicamente
    array_exibe_par_ordenado(par_ordenado, tam_par_ordenado);

    //reflexiva, simetrica, antissimétrica, transitiva

    //############reflexiva
    int pares_reflexivos[10];

    //preenche o array pares_reflexivos[20], com todos do pares ordenados reflexivos do conjunto universo
    for (i = 0; i < 5; i++) {
        pares_reflexivos[(i * 2)] = i;
        pares_reflexivos[1 + (i * 2)] = i;
    }

    //verifica se os pares ordenados são reflexivos
    for (i = 0; i < 10; i += 2) {
        if (!array_elemento_par_ordenado(pares_reflexivos[i], pares_reflexivos[i + 1], par_ordenado, 20)) {
            printf("Não é uma relação reflexiva \n");
            break;
        } else {
            if (i == 8) {
                printf("É uma relação reflexiva \n");
            }
        }
    }

    //######Simétrica

    //verifica se o par ordenado é simétrico
    for (i = 0; i < tam_par_ordenado; i += 2) {
        //pega cada elemento (?, ?) e vê se existe um elemento (b, a) para cada elemento (a, b)
        if (!array_busca_par_ordenado(par_ordenado[i + 1], par_ordenado[i], par_ordenado, tam_par_ordenado)) {
            printf("Não é uma relação simétrica\n");
            break;
        } else {
            if (i == tam_par_ordenado - 2) {
                printf("É uma relação simétrica\n");
            }
        }
    }

    //######Antissimétrica
    for (i = 0; i < tam_par_ordenado; i += 2) {
        /*verifica se um elemento não é antissimétrico, ou seja, verifica se há um elemento
        (a, b) e um (b, a) onde "a" é diferente de "b" verifica sé há um elemento simetrico que */
        if (array_busca_par_ordenado(par_ordenado[i + 1], par_ordenado[i], par_ordenado, tam_par_ordenado) && par_ordenado[i + 1] != par_ordenado[i]) {
            printf("Não é uma relação antissimétrica\n");
            break;
        } else {
            if (i == tam_par_ordenado - 2) {
                printf("É uma relação antissimétrica\n");
            }
        }
    }

    //#######Transitiva
    bool transitiva = true;

    /*verifica se um elemento é transitivos, ou seja, verifica se quando há dois elementos
    (a, b) e um (b, c) que tenha também (o elemento (a, c) */
    for (i = 0; i < tam_par_ordenado; i += 2) {

        //se já foi descoberto que a relação não é transitiva interrompe a execução
        if (!transitiva) {
            break;
        }
        //armazena o indice da posição do elemento (?, ?) do par ordenado que está sendo analisado no momento
        int par_atual[2] = {i, i + 1};

        //percorre o array de pares ordenados
        for (j = 0; j < tam_par_ordenado; j += 2) {

            //verifica se não esta sendo analisado o proprio elemento (a, b) em questão
            if (j != par_atual[0] && (j + 1) != par_atual[1]) {

                //verifica se há um elemento (b, ?), sendo b igual ao b de (a, b)
                if (par_ordenado[j] == par_ordenado[par_atual[1]]) {

                    //verifica se há o elemento (a, c)
                    bool a_c = array_busca_par_ordenado(par_ordenado[par_atual[0]], par_ordenado[j + 1], par_ordenado, tam_par_ordenado);

                    if (!a_c) {
                        transitiva = false;
                        break;
                    }
                }
            }
        }
    }

    if (transitiva) {
        printf("É uma relação transitiva\n");
    } else {
        printf("Não é uma relação transitiva\n");
    }

    return 0;
}
