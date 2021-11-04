#include <stdio.h>

int main ()
{
	
 int valor[7];
 int resultado = 0, i;
 
 //entrada start
 for(i=0;i<7;i++){
 printf("digite o array na posicao: %d \n", i);
 scanf("%d", &valor[i]);
 }
 
   for(i=0;i<7;i++){
   	printf("o ARRAY [%d] = %d \n", i, valor[i]);
   }
   

return 0;	

}
