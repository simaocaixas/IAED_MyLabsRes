/* iaed24 - ist1109632 - lab05/ex01 */
#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex num1, num2, soma;

    scanf("%f+%fi %f%fi", &num1.real, &num1.imag, &num2.real, &num2.imag);

    soma.real = num1.real + num2.real;
    soma.imag = num1.imag + num2.imag;

    if (soma.imag < 0) {
    printf("%.2f%.2fi\n", soma.real, soma.imag);
    return 0;

    }
    printf("%.2f+%.2fi\n", soma.real, soma.imag);
    return 0;
}

