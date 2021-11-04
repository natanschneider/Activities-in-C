#include <stdio.h>

int main ()
{
    int i, impar = 0, par = 0;
    int valor[7];
 
    for(i = 0; i < 7; i++){

        printf("Digite o array na posicao: %d \n", i);
        scanf("%d \n", &valor[i]);

    }
  
    for(i = 0; i < 7; i++){
      if(valor[i] % 2 == 0){
          printf("\n ARRAY[%d] = %d - par \n", i, valor[i]);
      }
      else{
          printf("\n ARRAY[%d] = %d - impar \n", i, valor[i]);
      }        
    }
    
return 0;	
}
