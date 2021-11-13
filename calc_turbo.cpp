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
		    
			    result += valor;
			   	
				printf("\n ## Resultados ## \n case + \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
				break;
					
			case '-':
			    result = (result - valor);
				printf("\n ## Resultados ## \n case - \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);    
				break;
				
			case '/':
			    result = (result / valor);	
				printf("\n ## Resultados ## \n case / \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);	    
				break;
				
		    case '*':
			    result = (result * valor);
				printf("\n ## Resultados ## \n case * \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
				break;
				
			case '=':
				result = result;
			    printf("\n ## Resultados ## \n case = \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
			    loop = 1;
				break;
						
			default :
			    printf("*##* ERRO! *##* \n");
				printf("\n ## Resultados ## \n case default \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
	    } 
        result = result;
		printf("\n ## Resultados ## \n Final do Loop \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
        
	} while(loop == 0);
     return result;
	 printf("O resultado final eh: %.2f /n", result);
	 printf("\n ## Resultados ## \n Fora do Loop \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
		
return 0;	
}
