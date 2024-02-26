/* iaed24 - ist1109632 - lab03/ex01 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char expressao[100];
    fgets(expressao, sizeof(expressao), stdin);

    int resultado = 0;
    int numero_atual = 0;
    char operador = '+';
    int i = 0;

    while (expressao[i] != '\n') {
        if (expressao[i] >= '0' && expressao[i] <= '9') {
            numero_atual = numero_atual * 10 + (expressao[i] - '0');
        } else if (expressao[i] == '+' || expressao[i] == '-') {
            if (operador == '+') {
                resultado += numero_atual;
            } else if (operador == '-') {
                resultado -= numero_atual;
            }
            operador = expressao[i];
            numero_atual = 0;
        }
        i++;
    }

    if (operador == '+') {
        resultado += numero_atual;
    } else if (operador == '-') {
        resultado -= numero_atual;
    }

    printf("%d\n", resultado);
    return 0;
}
