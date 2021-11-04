#include <stdio.h>

int main(){
	int valor1, valor2, op, total;
	
	printf("Digite o valor A: \n");
	scanf("%d",&valor1);
	
	printf("Digite o valor B: \n");
	scanf("%d",&valor2);
	
	printf("Escolha uma operacão (1:soma, 2:subtracao, 3:divisao, 4:multiplicacao): \n");
	scanf("%d",&op);
	
	switch ( op ){
		case 1 : 
	    total = (valor1 + valor2);
	    printf("%d + %d = %d",valor1, valor2, total);
	    break;  
		case 2 :
		total = (valor1 - valor2);
		printf("%d - %d = %d",valor1, valor2, total);
		break;  
		case 3 :  
	    total = (valor1 / valor2);
		printf("%d / %d = %d",valor1, valor2, total);
		break;  
		case 4 :
	    total = (valor1 * valor2);
	    printf("%d * %d = %d",valor1, valor2, total);
	    break;
	}
	
	return 0;
}
 
