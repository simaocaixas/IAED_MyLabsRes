/* iaed24 - ist1109632 - lab05/ex03 */
#include <stdio.h>
#include <string.h>

#define VECMAX 20

typedef struct {
    char nome[VECMAX];
    float valor_anual;
    float rendimento;
} Financas;

int main() {
    
    char nome_final[VECMAX];
    int N, i;
    float rendimentoMAXI = 0, valor_anual_final = 0;
    Financas Empresa;

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%s %f %f", Empresa.nome, &Empresa.valor_anual, &Empresa.rendimento); {
            if (Empresa.rendimento > rendimentoMAXI) {
                rendimentoMAXI = Empresa.rendimento;
                valor_anual_final = Empresa.valor_anual;
                strcpy(nome_final, Empresa.nome);

            }
        }
    }

    printf("%s %.2f %.2f\n", nome_final, valor_anual_final, rendimentoMAXI);
    return 0;
}