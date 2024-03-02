//SELECTION SORT
#include <stdio.h>
#include <stdlib.h>

void swap(long *a, long *b) {
    long aux = *a;
    *a = *b;
    *b = aux; }

void sort(long N, long *vector) {

    int e, i, index_min; 
    for (e = 0; e < N; e++) {
        index_min = e;                     
        for (i = e; i < N; i++) {
            if (vector[i] < vector[index_min]) {
                index_min = i;  
            }
        }
        swap(&vector[e], &vector[index_min]);
    }
}

int main() {
    long *vector;
    long N;
    int i;

    printf("Veclen: ");
    scanf("%ld", &N);

    vector = (long*)malloc(N * sizeof(long));
    if (vector == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %ld numbers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%ld", &vector[i]);
    }

    sort(N, vector);

    for (i = 0; i < N; i++) {   
        if (i == (N - 1)) {
            printf("%ld\n", vector[i]);
        } else { printf("%ld ", vector[i]); } 
        }

    free(vector);
    return 0;
}

/*

Exercício 2 (SelectionSort)

Considere a aplicação do algoritmo selectionsort ao vector a:

a = { 20, 11, 16, 8, 21, 12, 10, 14, 17, 6 }

Supondo que em cada iteração o algoritmo identifica o menor elemento e
o coloca na posição mais à esquerda, qual o conteúdo do vector a
após as três primeiras iterações? 

Resposta: a = {6, 8, 10, 20, 11, 16, 21, 12, 14, 17}

*/
