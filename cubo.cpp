#include <stdio.h>
int cubo (int num)
{
    int res;
    res = (num * num * num);

return res;   
}
int main()
{
    int valor, resultado;
    printf("Digite um numero para saber seu cubo: \n");
    scanf("%d",&valor);
    resultado = cubo(valor);
    printf("O cubo é: %d",&resultado);

return 0;    
}
