#include <stdio.h>
#include <stdlib.h>

void duplica_componteiros(int *p) {
    *p = (*p + 2);  // neste caso o ponteiro (*p) está sempre a apontar para o endereço (&i)  
}
void duplica_semponteiros(int a) {
    a = (a + 2);    // neste caso a variavel a está 
}

int main() {    
    
    /*
    A e I são duas variaveis que valem inicialmente 2! P é um ponteiro criado que aponta para o endereço de I! 
    */

    int I = 2;
    int A = 2;
    int *P = &I;     //0x7ffc18e44148 é o endereço de I 

    duplica_componteiros(P); //Aqui alteramos diretamente o valor que se encontra no endereco 0x7ffc18e44148
    duplica_semponteiros(A); //Aqui fazemos uma copia de A que eventualmente se perde na função duplica_semponteiros visto que não dá nenhum return

    printf("Valor do p após ser duplicado numa funcao void: %d\n", *P);
    printf("Valor do a após ser duplicado numa funcao void: %d\n", A);

    return 0;
}
