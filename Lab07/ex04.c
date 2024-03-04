// INSERTION SORT
#include <stdio.h>
#include <stdlib.h>

void sort(long n, long *vec) {
    int i, j, runner;

    for (i = 1; i < n; i++) {
        runner = vec[i];
        j = i - 1;

        while(j >= 0 && vec[j] > runner) {
            vec[j + 1] = vec[j];
            j -= 1;
        }
        vec[j + 1] = runner;
    }
}

int main() {

    long *vec;
    long n;
    int i;

    printf("Veclen: ");
    scanf("%ld", &n);
    
    vec = (long*)malloc(n * sizeof(long));

    if (vec == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%ld", &vec[i]);
    }

    sort(n, vec);

    for (i = 0; i < n; i++) {   
        if (i == (n - 1)) {
            printf("%ld\n", vec[i]);
        } else { printf("%ld ", vec[i]); } 
        }
    free(vec);
    return 0;
}

/*

Exercício 4 (InsertionSort)

Considere a aplicação do algoritmo insertionsort ao vector a:

a = { 20, 11, 16, 8, 21, 12, 10, 14, 17, 6 }

Supondo que o algoritmo vai inserindo os elementos à esquerda,
qual o conteúdo do vector a após as três primeiras iterações?

a = { 8, 11, 16, 20, 21, 12, 10, 14, 17, 6 }

*/
