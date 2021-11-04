
#include <stdio.h>

int main()
{
    float peso, altura, imc, altura2;
    
    printf("Digite seu peso: \n");
    scanf("%f",&peso);
    
    printf("Digite sua altura: \n");
    scanf("%f",&altura);
    
    altura2 = (altura * altura);
    imc = (peso / altura2);
    
    printf("Seu IMC é: %f",imc);
    
    if{(imc <= 18.5);
        printf("CUIDADO, seu IMC esta em Magreza \n");
        }if{(imc <= 24.9)
            printf("Seu IMC esta normal! \n")
        }if{(imc)
            
        }
    
    return 0;
}
