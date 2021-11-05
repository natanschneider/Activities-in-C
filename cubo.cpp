#include <stdio.h>

int cubo (int num)
{
    int res;
    res = (num * num * num);

return res;   
}

    int valor, res;
    printf("Digite um numero para saber seu cubo: \n");
    scanf("%d",valor);
    res = cubo(valor);
    printf("\nO cubo é: %d",res);

int main()
{
return 0;    
}
