#include <stdio.h>
int main()
{
	
	int Valor [5];
	int segValor [5];
	int i, j = 5, calculo;

    for(i = 0; i < 3; i++){
        printf("Insira o valor da primeira Array [%d] \n", i);
        scanf("%d", &Valor[i]);
    }

    for(i = 0;i < 3; i++){
        printf("Insira o valor da segunda Array [%d] \n", i);
        scanf("%d", &segValor);
    }

    for(i = 0;i < 3; i++){
        j--;
        calculo = (Valor[i] * segValor[i]);
        printf("\n[%d] x [%d] = [%d]", i, j, calculo);
    }

return 0;
}
