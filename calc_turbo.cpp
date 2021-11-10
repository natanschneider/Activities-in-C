#include <stdio.h>

int soma(){
	float valor;
}

int subtracao(){
	float valor;

}

int multi(){
	float valor;

}

int divi(){
	float valor;

}

int main(){
	int i = 0, loop = 0;
	float val = 0, result = 0;
	char op;
	
    while(loop == 0){
    	printf("Digite um valor: \n");
	    scanf("%f",&val);
	
	    printf("Insira uma operacao: (Para apresentar o resultado insira '=') \n");
	    scanf(" %c",&op);
	
	    //switch( op ){
	    //	case '=':
		//		loop = 11;
		//		printf("Seu resultado final eh: %.2f \n", result);
		//		break;	
		//  case '+':
		//	    result = (val + val);
		//		break;	
		//	case '-':
		//	    result = (val - val - val);
		//		break;
		//	case '/':
		//	    result = (val / val / val);
		//		break;
		//  case '*':
		//	    result = (val * val * val);
		//		break;
		//	default :
		//	    printf("ERRO!");				    
	    //}    
	}	
return 0;	
}

