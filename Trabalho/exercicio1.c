#include <stdio.h>
#include <stdlib.h>

int conj_A[10], conj_B[10];
int main(){
    for (int i = 0; i < 10; i++)
    {
        conj_A[i] = (rand()%50);
        conj_B[i] = (rand()%50);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("\nConjunto A: %d", conj_A[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nConjunto B: %d", conj_B[i]);
    }
    printf("\n\n");
    void UniaoConj();
        UniaoConj(0);
    printf("\n\n");
    void Interseccao();
        Interseccao(0);
    printf("\n\n");
    void diferenca();
        diferenca();
    printf("\n\n");
return 0;
}

void UniaoConj(int uniao){
    for (int i = 0; i < 10; i++)
    {
        if (conj_A[i] == conj_B[i])
        {
            uniao = conj_B[i];
            printf("\nUnião dos conjuntos: %d", uniao);
        }
            else
            {
                printf("\nUnião dos conjuntos: %d", conj_A[i]);
            }
            
    }
    
}

void Interseccao(int cont){

    printf("\nIntersecção dos conjuntos: \n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (conj_A[i] == conj_B[j])
            {
                printf("\n%d", conj_A[i]);
                cont++;
            }
        }
    }
    if (cont == 0)
    {
        printf("\nNão existe intersecção entre os conjuntos");
    }
}

void diferenca(){
    
}