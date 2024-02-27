/* iaed24 - ist1109632 - lab05/ex07 */
#include <stdio.h>

typedef struct {
    int Dia;
    int Mes;
    int Ano;
    int Horas;
    int Minutos;
} Calendario;

int dias_para_mes(int Dias, int Mes) {
    
    int DiasRestantes = Dias;
    Mes = 1;
    int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        for (int i = 0; i < 12; ++i) {
        if (DiasRestantes >= dias_por_mes[i]) {
            DiasRestantes -= dias_por_mes[i];
            Mes++;
        } else {
            break; 
        }
    }
    return Mes;
}

int mes_para_dias(int Dias, int Mes) {

    int DiasRestantes = Dias;
    Mes = 1;
    int dias_por_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        for (int i = 0; i < 12; ++i) {
        if (DiasRestantes >= dias_por_mes[i]) {
            DiasRestantes -= dias_por_mes[i];
            Mes++;
        } else {
            break; 
        }
    }
    return DiasRestantes;
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

Data.Mes = 1;
Data.Dia = 1;
Data.Ano = 2022;
Data.Horas = 0;
Data.Minutos = 0;


scanf("%d", &Data.Minutos);

if (Data.Minutos >= 60) {
    Data.Horas = (Data.Minutos / 60);
    Data.Minutos %= 60;
}

if (Data.Horas >= 24) {
    Data.Dia += Data.Horas / 24;
    Data.Horas %= 24;
}

if (Data.Dia >= 31) {
    Data.Mes = dias_para_mes(Data.Dia, Data.Mes);
    Data.Dia = mes_para_dias(Data.Dia, Data.Mes);
}
if (Data.Mes > 12) {
    Data.Ano = (2022) + (Data.Mes / 12);
    Data.Mes %= 12;
}
printf("%02d-%02d-%02d %02d:%02d\n", Data.Dia, Data.Mes, Data.Ano, Data.Horas, Data.Minutos);
return 0;
}
