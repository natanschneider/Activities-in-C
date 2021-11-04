#include <stdio.h>
int main()
{
	int valor[7] = {15,66,12,0,6,10,7};
	int tot, i;
	
	for(i=0;i<7;i++){
		tot = (tot + valor[i]);
	}
    printf("O valor total eh: %d \n",tot);

return 0;	
}
