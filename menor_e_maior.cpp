#include <stdio.h>

int main ()
{
 int menor=0, maior=0, i, media=0;	
 int valor[7] = {15,66,12,1,6,10,7};
 
 for(i=0;i<7;i++){
 }
if(i==0){maior=valor[i];menor=valor[i];}
      if(valor[i]>maior){
        maior=valor[i];
      }
      else{
        if(valor[i]<menor){
            menor=valor[i];}
            printf("o maior valor eh %d", maior);
}



printf("o menor valor eh: %d", menor);
printf("a media do valor eh: %d", media);

return 0;	

}
