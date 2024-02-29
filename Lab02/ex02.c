/* iaed24 - ist1109632 - lab02/ex02 */
#include <stdio.h>

int main() {

    int numUm, numDois;

    scanf("%d",&numUm);
    scanf("%d",&numDois);

    if (numUm < numDois) {
        printf("%d\n%d\n",numUm,numDois);
    return 0;
    }
    if (numUm > numDois) {
        printf("%d\n%d\n",numDois,numUm);
    return 0;
    }


    return 0;
    }