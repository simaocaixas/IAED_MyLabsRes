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

int minutos_ao_mes(int Mes, int Ano) {
    int total_minutos = 0; 
    for (int i = 1; i <= Mes - 1; i++) {
        if (i == 2 && isBissexto(Ano)) { 
            total_minutos += 29 * 24 * 60;
        } else if (i == 2 && !isBissexto(Ano)) { 
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

    Calendario Data1, Data2;
    int MinutosData1 = 0, MinutosData2 = 0;

    scanf("%d-%d-%d %d:%d", &Data1.Dia, &Data1.Mes, &Data1.Ano, &Data1.Horas, &Data1.Minutos);
    scanf("%d-%d-%d %d:%d", &Data2.Dia, &Data2.Mes, &Data2.Ano, &Data2.Horas, &Data2.Minutos);

    MinutosData1 += (Data1.Horas * (60)) + Data1.Minutos;
    MinutosData1 += Data1.Dia * (24) * (60);
    MinutosData1 += minutos_ao_mes(Data1.Mes, Data2.Ano);
    
    if(isBissexto(Data1.Ano)) {
        MinutosData1 += Data1.Ano * 527040; 
    } else {
        MinutosData1 += Data1.Ano * 525600; 
    }

    MinutosData2 += (Data2.Horas * (60)) + Data2.Minutos;
    MinutosData2 += Data2.Dia * (24) * (60);
    MinutosData2 += minutos_ao_mes(Data2.Mes, Data2.Ano);
    
    if(isBissexto(Data2.Ano)) {
        MinutosData2 += Data2.Ano * 527040; 
    } else {
        MinutosData2 += Data2.Ano * 525600; 
    }

    MinutosData1 = MinutosData2 - MinutosData1;

    printf("%d\n", MinutosData1);
    return 0;
}