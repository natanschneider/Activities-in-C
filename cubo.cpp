#include <stdio.h>
int cubo (int num)
{
    int res;
    res = (num * num * num);

return res;   
}

int main(void)
{
    int valor, resultado;
    printf("Digite um numero para saber seu cubo: \n");
    scanf("%d", &valor);
    resultado = cubo(valor);
    printf("O cubo é: %d \n", resultado);

return 0;    
}
