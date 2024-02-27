/* iaed24 - ist1109632 - lab05/ex07 */
#include <stdio.h>
#include <string.h>

#define MAXVEC 20

typedef struct {
    int Dia;
    int Mes;
    int Ano;
} Calendario;

int main() {

    Calendario Data1, Data2;

    scanf("%d-%d-%d", &Data1.Dia, &Data1.Mes, &Data1.Ano);
    scanf("%d-%d-%d", &Data2.Dia, &Data2.Mes, &Data2.Ano);

    if (Data1.Ano < Data2.Ano || 
        (Data1.Ano == Data2.Ano && Data1.Mes < Data2.Mes) || 
        (Data1.Ano == Data2.Ano && Data1.Mes == Data2.Mes && Data1.Dia < Data2.Dia)) {
        printf("%02d-%02d-%02d %02d-%02d-%02d\n", Data1.Dia, Data1.Mes, Data1.Ano, Data2.Dia, Data2.Mes, Data2.Ano);
    } else {
        printf("%02d-%02d-%02d %02d-%02d-%02d\n", Data2.Dia, Data2.Mes, Data2.Ano, Data1.Dia, Data1.Mes, Data1.Ano);
    }

    return 0;
}
