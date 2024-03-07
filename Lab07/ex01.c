// BUBBLE SORT 
#include <stdio.h>
#include <stdlib.h>

void swap(long *a, long *b) {
    long temp = *a;
    *a = *b;
    *b = temp;
}

void sort(long *array, long N) {
    int i,j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

int main () {
    long *array;
    long N;
    int i;

    scanf("%ld", &N);
    array = (long*)malloc(N * sizeof(long));

    if (array == NULL) {
        printf("Memory Leak!");                             
        return 0; }

    for (i = 0; i < N; i++) {
        scanf("%ld", &array[i]);  }

    sort(array, N);

    for (i = 0; i < N; i++) {   
        if (i == (N - 1)) {
            printf("%ld\n", array[i]);
        } else { printf("%ld ", array[i]); } 
        }
    free(array);
    return 0;
}


/*
Exercício 1 (BubbleSort):

Considere a aplicação do algoritmo bubblesort ao vector a:

a = { 20, 11, 16, 8, 21, 12, 10, 14, 17, 6 }

Supondo que em cada iteração o algoritmo percorre o vector da esquerda para a direita, qual o
conteúdo do vector a após as duas primeiras iterações?

a = { 11, 8, 16, 12, 10, 14, 17, 6, 20, 21 }

*/
