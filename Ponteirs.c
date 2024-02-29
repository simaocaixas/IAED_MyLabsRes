#include <stdio.h>
#include <stdlib.h>


// Ponteiros - Introdução; Começar a ler por a função main!

void duplica_componteiros(int *p) {
    *p = (*p + 2);             // neste caso o ponteiro (*p) está sempre a apontar para o endereço (&i)  
}
void duplica_semponteiros(int a) {
    a = (a + 2);               // neste caso é criada uma copia da variavel 'a' por ser uma função sem retorno esta copia é perdida!
}

int main() {    
    
    /*
    A e I são duas variaveis que valem inicialmente 2! P é um ponteiro criado que aponta para o endereço de I! 
    */

    int I = 2;
    int A = 2;
    int *P = &I;               //0x7ffc18e44148 é o endereço de I; Para printar o endereço para o terminal: printf("Endereço de I:%p", P);"

    duplica_componteiros(P);   //Alteramos diretamente o valor que se encontra no endereco 0x7ffc18e44148
    duplica_semponteiros(A);   //Fazemos uma copia de A que eventualmente se perde na função duplica_semponteiros visto que a função não dá nenhum return!

    printf("Valor do p após ser duplicado numa funcao void: %d\n", *P);
    printf("Valor do a após ser duplicado numa funcao void: %d\n", A);

    return 0;
}

/*
int fun(const int *p) {      // 3 - O ponteiro 'p' aponta para uma constante; neste caso, a constante 'i' com valor 10
    *p = 0;                  // 4 - Tentativa de modificar o valor apontado por 'p' para 0; isso causará um erro de compilação, pois 'i' é uma constante
    return 0;                // 5 - Isto nunca será alcançado!!
}

int main() {
    const int i = 10;        // 1 - Declaração de uma constante do tipo integer 'i' com o valor 10, que não pode ser alterada ao longo do programa!
    fun(&i);                 // 2 - Chama a função 'fun' e passa o endereço da memoria da constante 'i' como argumento (ex: 0x7fff77923cc8)
    return 0;
}
*/



