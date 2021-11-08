// Implemente uma calculadora em C que receba numeros continos seguidos de suas operações
// onde que a cada operação ele vai tranformado em um resultado.
// Exemplo: 2+3-8*2 = -2

#include <stdio.h>


int main()
{
    int val[4] = {0}, i, calc, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor:");
            scanf("%d", &val[i]);

            printf("Digite uma operação: ");
            scanf("%d", j);
 
        }
    }

return 0;
}
