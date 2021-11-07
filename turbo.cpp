// Implemente uma calculadora em C que receba numeros continos seguidos de suas operações
// onde que a cada operação ele vai tranformado em um resultado.
// Exemplo: 2+3-8*2 = -2

#include <stdio.h>

int main()
{
    int val[4] = {0}, i, calc;

    for(i = 0; i < 4; i++){
        printf("Digite os valores:");
        scanf("%d", &val[i]);

        calc = (val[0] + val[1] - val[2] * val[3]);

        printf("\n %d+%d-%d*%d = %d \n", val[0], val[1], val[2], val[3], calc);
    }

return 0;
}
