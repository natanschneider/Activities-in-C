#include <stdio.h>
int main()
{
	
	int Valor [5];
	int segValor [5];
	int i, j = 5, calculo, o;

    for(i = 0; i < 5; i++){
        printf("Insira o valor da primeira Array [%d] \n", i);
        scanf("%d", &Valor[i]);
    }

    for(o = 0;o < 5; o++){
        printf("Insira o valor da segunda Array [%d] \n", o);
        scanf("%d", &segValor[o]);
    }

    for(i = 0;i < 5; i++){
        j--;
        calculo = (Valor[i] * segValor[j]);
        printf("\n[%d] x [%d] = [%d]", i, j, calculo);
    }

return 0;
}
