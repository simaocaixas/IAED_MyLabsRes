/* iaed24 - ist1109632 - lab04/ex01 */
#include <stdio.h>
#define VECMAX 100

int main() {

    char T[VECMAX];
    int N;
    scanf("%d", &N);

    while ((scanf("%s", T)) != EOF) {
        for (int i = 0; T[i] != '\0'; i++) { 
                for (int Contador = 0; (Contador < (T[i] - '0')); Contador++) {
                    printf("*");
                }
                printf("\n");
            }
    }

    return 0;
}