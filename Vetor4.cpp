#include <stdio.h>
int main()
{
	int val[3][3];
	int segval[3][3];
	int i, j; 
	
	val[0][0] = 12;
	val[0][1] = 15;
	val[0][2] = 11;
	
	val[1][0] = 9;
	val[1][1] = 6;
	val[1][2] = 4;
	
	val[2][0] = 1;
	val[2][1] = 8;
	val[2][2] = 66;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
		    printf("O valor do array[%d][%d] = %d \n", i, j, val[i][j]);	    
	    }
	}
	
	printf("\n\n******************* /// ********************* \n\n");
		    
	for(j = 0; j < 3; j++){
		for(i = 0; i < 3; i++){
            segval[j][i] = val[i][j];
	    } 	    
    }
    
    for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
		    printf("O valor invertido do array[%d][%d] = %d \n", i, j, segval[i][j]);		    
	    }
	}
return 0;
}

