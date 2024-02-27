/* iaed24 - ist1109632 - lab05/ex07 */
#include <stdio.h>
#include <string.h>

#define MAXVEC 20

typedef struct {
    int Dia;
    int Mes;
    int Ano;
} Calendario;

int tem_31dias(int N) {
    return N == 1 || N == 3 || N == 5 || N == 6 || N == 7 || N == 9 || N == 10 || N == 12;
}

int isBissexto(int ano) {
    return ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0));
}

int main () {

    Calendario Data;

    scanf("%d-%d-%d", &Data.Dia, &Data.Mes, &Data.Ano);
    Data.Dia++; 

    if (Data.Dia == 32 && tem_31dias(Data.Mes)) {
        Data.Mes = (Data.Mes + 1);
        Data.Dia = 1;
    }
    if (Data.Dia == 31 && !tem_31dias(Data.Mes)) {
        Data.Mes = (Data.Mes + 1);
        Data.Dia = 1;
    }
   if (Data.Dia == 29 && Data.Mes == 2 && !isBissexto(Data.Ano)) {
        Data.Mes = (Data.Mes + 1);
        Data.Dia = 1;
   }
   if (Data.Dia == 30 && Data.Mes == 2 && isBissexto(Data.Ano)) {
        Data.Mes = (Data.Mes + 1);
        Data.Dia = 1;
   }

    if (Data.Mes == 13) {
        Data.Mes = 1;
        Data.Ano++;
    }

    printf("%02d-%02d-%02d\n", Data.Dia, Data.Mes, Data.Ano);
    return 0;
}