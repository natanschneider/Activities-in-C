    
#include <stdio.h>
    
int main()
{   
    int num, calc, tot;
    
    printf("Digite um numero inteiro de 0 a 9: \n");
    scanf("%i",&num);
    
    for(calc = 0; calc < 10; calc++){
    	tot = (num * calc);
    	printf("%d X %d = %d \n",num, calc, tot);
	}
    return 0;
}   
    
