/* iaed24 - ist1109632 - lab05/ex04 */
#include <stdio.h>

#define MAXDIM 100
int ganha(int dim, char tab[MAXDIM][MAXDIM], char jogador) {
    int k, l, win = 0, wincol = 0, winlin = 0;

    for (k = 0; k < dim; k++) {
        wincol = 0;
        winlin = 0;
        for (l = 0; l < dim; l++) {
            if (tab[k][l] == jogador) {
                winlin++;
            }
            if (tab[l][k] == jogador) {
                wincol++;
            }
            if (winlin == 3 || wincol == 3) {
                return 1;
            }
        }
    }

    win = 0;
    for (k = 0; k < dim; k++) {
        if (tab[k][k] == jogador) {
            win++;
            if (win == 3) {
                return 1;
            }
        }
    }

    win = 0;
    for (k = 0; k < dim; k++) {
        if (tab[k][dim - 1 - k] == jogador) {
            win++;
            if (win == 3) {
                return 1;
            }
        }
    }

    return 0;
}
    int main () {

    char tab[MAXDIM][MAXDIM];
    int D, N, XC = 0, OC = 0;
    scanf("%d", &D);
    scanf("%d", &N);

    int i, j, h, v;
    char c; 

    for (i = 0; i < D; i++) {
        for (j = 0; j < D; j++) {
            tab[i][j] = ' ';
        }
    }

    for (i = 0; i < N; i++) {
        scanf("%d %d %c", &h, &v, &c);  
        tab[h][v] = c;
        if (c == 'x') {
            XC++; } else { OC++;} 
    }
    if (XC == OC)
    if ((ganha(D, tab, 'x')) || (ganha(D, tab, 'o'))) {
        putchar('?');
        putchar('\n');
        return 0;
    }
    if (ganha(D, tab, 'x')) {
        putchar('x');
        putchar('\n');
        return 0;
    }
    if (ganha(D, tab, 'o')) {
        putchar('o');
        putchar('\n');
        return 0;
    } else {
        putchar('?');
        putchar('\n');
    }
        return 0;
    }
