#include <stdio.h>

int main()
{   
    float metro, x;
    
    printf("Digite uma medida em metro: \n");
    scanf("%f",&metro);
    
    x = (metro * 100);
    
    printf("%f m e o mesmo que %f cm! \n",metro, x);
    
    return 0;
}

