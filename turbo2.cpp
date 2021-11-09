// Implemente uma calculadora em C que receba numeros continos seguidos de suas operações
// onde que a cada operação ele vai tranformado em um resultado.
// Exemplo: 2+3-8*2 = -2

#include <stdio.h>

int calc(float valor, float segValor, int op)
{
    float calc;

        switch (op)
        {
        case 1:
            calc = valor + segValor;
            break;

        case 2:
            calc = valor - segValor;
            break;

        case 3:
            calc = valor * segValor;
            break;

        case 4:
            calc = valor / segValor;
            break;

        default:
        printf("ERRO!");
        }
return (op);    
}

int main(void)
{
    float val = 0, segVal = 0, result;
    float terVal = 0, quaVal = 0, resu;
    int j = 0, n = 0, i = 0;
    
    for(i = 0; i < 5; i++){
    printf("Digite um valor: \n");
    scanf("%f", &val);

    printf("Digite o segundo valor: \n");
    scanf("%f", &segVal);

    printf("Digite uma operação: \n");
    scanf("%d \n", &j);           

    result = calc(val, segVal, j);
    printf("%2.f \n", result);
    }

    //  PARTE 2 //

    //printf("Digite um valor: \n");
    //scanf("%f \n", &terVal);

    //printf("Digite o segundo valor: \n");
    //scanf("%f \n", &quaVal);

    //printf("Digite uma operação: \n");
    //scanf("%d \n", &n);           

    //resu = calc(terVal, quaVal, n);
    //printf("%2.f \n", resu);

    // PARTE 3 //

    

return 0;
}
