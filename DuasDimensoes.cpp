#include <stdio.h>
int main()
{
	
	int valor [3][3];
	int resultado [3][3];
	int i, j;
	
	// linha x coluna
	valor[0][0] = 12;
	valor [0][1] = 15;
	valor [0][2] = 11;
	
	valor [1][0] = 9;
	valor [1][1] = 6;
	valor [1][2] = 4;
	
	valor [2][0] = 1;
	valor [2][1] = 8;
	valor [2][2] = 66;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n primeiro array [%d][%d]= %d \n",i, j, valor[i][j]);
		}
	}
	
	printf("\n\n******************* /// ********************* \n\n");
	
	for(j=0;j<3;j++){ 
		for(i=0;i<3;i++){
			resultado[i][j] = valor[j][i];
		}
	}
	//esse vai ser pra mostrar o resultado
	for(j=0;j<3;j++){ 
		for(i=0;i<3;i++){
			printf("\n o resultado array [%d][%d]= %d \n",j, i, resultado[j][i]);
		}
	}
	
	
	
return 0;
}
