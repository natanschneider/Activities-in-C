#include <stdio.h>

int main(){
	int i = 0, loop = 0;
	float valor = 0, result = 0, result2 = 0;
	char op;
	
    do{
    	valor = 0;
		result = 0;
		i = 0;
		loop = 0;

    	printf("Digite um valor: \n");
	    scanf(" %f", &valor);
		printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
	    printf("\n Digitou o valor: \n");
	    
	    printf("Insira uma operacao: Para apresentar o resultado insira = \n");
	    scanf(" %c", &op);
	    printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
	    printf("\n Digitou a operacao! \n");
	    
	    switch(op){
		    case '+':
		    	//result = result;
			    result += valor;
			    printf("%.2f \n", result);	
				printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
				break;
					
			case '-':
				//result = result;
				printf("Valor: %.2f \n", valor);
			    result += valor - result;
			    printf("%.2f \n", result);			
				printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);    
				break;
				
			case '/':
				//result = result;
			    result += valor / result;
			    printf("%.2f \n", result);		
				printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);	    
				break;
				
		    case '*':
		    	//result = result;
		    	printf("Valor: %.2f \n", valor);
			    result += valor * result;
			    printf("%.2f \n", result);
				printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
				break;
				
			case '=':
				//result = result;
				printf("Valor: %.2f \n", valor);
			    printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
			    loop = 1;
				break;
						
			default :
			    printf("ERRO! \n");
			    printf("Valor: %.2f \n", valor);
				printf("%.2f \n", result);
				printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);		    
	    } 
		printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);   
	    printf("O resultado parcial eh: %.2f \n", result);
	} while(loop == 0);
	 printf("\n ## Diagnostico ## \n valor: %.2f \n result: %.2f \n op: %c \n", valor, result, op);
	 printf("O resultado final eh: %.2f /n", result);
		
return 0;	
}

