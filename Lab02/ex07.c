/* iaed24 - ist1109632 - lab02/ex07 */
#include <stdio.h>

int main() {
    
    int num;
    int inteiro = 1;
    int contador = 0;

    scanf("%d", &num);

    while (inteiro <= num) {
        if (num % inteiro == 0) {
            contador += 1;
        }

    inteiro += 1;
    
    }

    printf("%d\n",contador);

    return 0;
}