/* iaed24 - ist1109632 - lab05/ex01 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

#define ALUNOS 100  // problema 
#define DISCIPLINAS 5  

long score_disciplina(int N, int disciplina, int valores[ALUNOS][DISCIPLINAS]) {

    int i, j,valor_linha = 0, contador = 0, contadorMax = 0, descreto = 0;

    for(i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (descreto == valores[i][1]) {
                descreto++;
            }
        }
        
    }
    for(i = 0; i < N; i++) {
        valor_linha = valores[i][1];
        contador = 0;
        for (j = 0; j < N; j++) {   
            if (valores[j][1] == valor_linha) {
                contador += valores[j][2];
            if (abs(contador) > contadorMax) {
                contadorMax = contador;
                disciplina = valores[j][1];
            }
        }
    }
    }
    if (contadorMax < 0) {
        printf("%d\n", descreto);
    }
    if (contadorMax > 0) {
        printf("%d\n", disciplina);
    }
        return disciplina; 
    }+

long score_aluno(int N, int aluno, int valores[ALUNOS][DISCIPLINAS]) {

    int i,j, entusiasmo, entusiasmomax = 0, alunoin = 0;

    for(i = 0; i < N; i++) {
        alunoin = valores[i][0];
        entusiasmo = 0;
        for (j = 0; j < N; j++) {
            if (valores[j][0] == alunoin) {
                entusiasmo += valores[j][2];
                if (entusiasmo > entusiasmomax) {
                    entusiasmomax = entusiasmo;
                    aluno = valores[i][0];

                }
            }
        }
        }
        printf("%d\n", aluno);
        return 0;
}

int main () {

    int N;
    int valores[ALUNOS][DISCIPLINAS];
    int i, j;
    int disciplina = 0;
    int aluno = 0;
    
    scanf("%d", &N);

    for(i = 0; i <= (N-1); i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &valores[i][j]);
        }
    }

    score_disciplina(N, disciplina, valores);
    score_aluno(N, aluno, valores);

    return 0;
}