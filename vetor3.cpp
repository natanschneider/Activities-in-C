#include <stdio.h>
int main()
{
	int valor[7] = {15,66,12,0,6,10,7};
	int menor, posmenor, i;
    int maior, posmaior, j, aux, media;
     
    menor = valor[0];
    posmenor = 0;

    maior = valor[0];
    posmaior = 0;
     
    for(i = 0; i < 7; i++){
        if (valor[i] < menor){ 
             menor = valor[i];
             posmenor = i;    
             break;
        } 
        if (valor[i] > maior){
             maior = valor[i];
             posmaior = i;
             break; 
        } 
    }    
    
    for (j = 1; j < 7; j++) {
        for (i = 0; i < 7 - 1; i++) {
            if (valor[i] > valor[i + 1]) {
            aux = valor[i];
            valor[i] = valor[i + 1];
            valor[i + 1] = aux;
            media = valor[4];
            }
        }
    }
    
    printf("O Maior valor eh: %d \n",maior);
    printf("O Menor valor eh: %d \n",posmenor);
    printf("Se ordenarmos, o valor do meio eh: %d \n", media);

return 0;	
}
