/* iaed24 - ist1109632 - lab05/ex07 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int Dia;
    int Mes;
    int Ano;
    int Horas;
    int Minutos;
} Calendario;

int isBissexto(int ano) {
    return ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0));
}

int minutos_ao_mes(int Mes, int Minutos) {
    int total_minutos = Minutos; 
    for (int i = 1; i <= Mes; i++) {
        if (i == 2) { 
            total_minutos += 28 * 24 * 60;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) { 
            total_minutos += 30 * 24 * 60;
        } else { 
            total_minutos += 31 * 24 * 60;
        }
    }
    return total_minutos; 
}

int main () {

    Calendario Data;
    int MinutosTotal = 0;

    scanf("%d-%d-%d %d:%d", &Data.Dia, &Data.Mes, &Data.Ano, &Data.Horas ,&Data.Minutos);

    if (isBissexto(Data.Ano)) {
        MinutosTotal += (Data.Ano - 2022) * 527040; 
    } else {
        MinutosTotal += (Data.Ano - 2022) * 525600;
    }

    if (Data.Mes != 1) {
    MinutosTotal += minutos_ao_mes(Data.Mes - 1, MinutosTotal); 
    }

    MinutosTotal += (Data.Dia - 1) * (24) * (60);
    MinutosTotal += (Data.Horas) * (60);
    MinutosTotal += (Data.Minutos);

    printf("%d\n", MinutosTotal);
    return 0;
}
