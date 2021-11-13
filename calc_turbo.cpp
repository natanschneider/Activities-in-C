#include <stdio.h>

int main(){
	int i, loop;
	float valor, result = 0;
	char op;
	
    do{
    	valor = 0;
		i = 0;
		loop = 0;
        result = result;

    	printf("** Digite um valor: **\n");
	    scanf(" %f", &valor);
		printf("\n ## Resultados ## \n pos scanf valor \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
	    printf("\n Digitou o valor: \n");
	    
	    printf("** Insira uma operacao: **\nPara apresentar o resultado insira =\n");
	    scanf(" %c", &op);
	    printf("\n ## Resultados ## \n Pos scanf op \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
	    printf("\n Digitou a operacao! \n");
	    
	    switch(op){
		    case '+':
		    	//result = result;
			    result += valor;
			    //printf("%.2f \n", result);	
				printf("\n ## Resultados ## \n case + \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
				break;
					
			case '-':
				//result = result;
				//printf("Valor: %.2f \n", valor);
			    result += result - valor;
			    //printf("%.2f \n", result);			
				printf("\n ## Resultados ## \n case - \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);    
				break;
				
			case '/':
				//result = result;
			    result += result / valor;
			    //printf("%.2f \n", result);		
				printf("\n ## Resultados ## \n case / \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);	    
				break;
				
		    case '*':
		    	//result = result;
		    	//printf("Valor: %.2f \n", valor);
			    result += result * valor;
			    //printf("%.2f \n", result);
				printf("\n ## Resultados ## \n case * \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
				break;
				
			case '=':
				//result = result;
				//printf("Valor: %.2f \n", valor);
			    printf("\n ## Resultados ## \n case = \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
			    loop = 1;
				break;
						
			default :
			    printf("*##* ERRO! *##* \n");
			    //printf("Valor: %.2f \n", valor);
				//printf("%.2f \n", result);
				printf("\n ## Resultados ## \n case default \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
	    } 
        result = result;
		printf("\n ## Resultados ## \n Final do Loop \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);   
	    //printf("O resultado parcial eh: %.2f \n", result);

	} while(loop == 0);

	 printf("O resultado final eh: %.2f /n", result);
	 printf("\n ## Resultados ## \n Fora do Loop \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
		
return 0;	
}
