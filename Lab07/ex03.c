#include <stdio.h>
#include <stdlib.h>

void swap(long *a, long *b) {
    long aux = *a;
    *a = *b;
    *b = aux;
}

void sort(long N, long *vector) {

    int i, index_max; 
    for (N = N; N != 0; N--) {
        index_max = 0;                     
        for (i = 0; i < N; i++) {
            if (vector[i] > vector[index_max]) {
                index_max = i;  
            }
        }
        swap(&vector[N - 1], &vector[index_max]);
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

Exercício 3 (SelectionSort)

Resolva o exercício anterior, mas considerando uma variação do
algoritmo SelectionSort. Suponha que em cada iteração, o algoritmo
identifica o maior elemento e o coloca na posição mais à direita.

Qual o conteúdo do vector a após as três primeiras iterações?

Resposta = { 14, 11, 16, 8, 6, 12, 10, 17, 20, 21 }


*/
