
#include <stdio.h>

int main()
{   
    int valor01, valor02, soma; // declarando variavel
    
    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor01);
    
    printf("Digite o segundo valor: \n");
    scanf("%d",&valor02);
    
    soma = (valor01 + valor02);
    
    printf("A soma de valor01 e valor02 é igual a %d \n",soma);
    
    if(soma >=10){
        printf("O valor da soma é maior que 10!  \n");
    }else if(soma == 2){
        printf("O valor da soma foi exatamente 2! \n");
    }else{
        printf("O valor da soma é menor que 10! \n");
    }

    return 0;
}
