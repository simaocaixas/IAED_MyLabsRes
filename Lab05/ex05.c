    /* iaed24 - ist1109632 - lab05/ex05 */
    #include <stdio.h>
    #include <string.h>

    typedef struct {
        int horas;
        int minutos;
    } Tempo;

    int main() {

        Tempo relogio1, relogio2;
        int soma_horas = 0, soma_minutos = 0;

        scanf("%d:%d", &relogio1.horas, &relogio1.minutos);
        scanf("%d:%d", &relogio2.horas, &relogio2.minutos);

        soma_horas = relogio1.horas + relogio2.horas;
        soma_minutos = relogio1.minutos + relogio2.minutos;

    

        if (soma_minutos >= 60) {
            soma_horas += (soma_minutos / 60);
            soma_minutos -= (soma_minutos / 60) * 60;

        }

        printf("%02d:%02d\n", soma_horas, soma_minutos);
        return 0;
    }
