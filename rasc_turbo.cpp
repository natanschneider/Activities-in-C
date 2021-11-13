#include <stdio.h>
//#include <conio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float n0,n1,resultado;
char c;
short loop = 0, a = '=';
short b = '.';

printf("Digite o valor: \n");
scanf("%f",&n0); 

   while(loop == 0)
{
    inicio:


    printf("Digite a operação desejada \n");
    //c = getch( );
    printf ("%c\n", c);

    if(c == a)
    {
    printf("resultado: %2.f", resultado);
    return 0; 
    }else if(c == b){
       system ("cls");
       scanf("%f",&n0);
    }

    printf("Digite o proximo valor: \n");
        scanf("%f",&n1);

    switch (c){
    case '+':
    resultado = (n0+n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '-':
    resultado = (n0-n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '*':
    resultado = (n0 * n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    case '/':
    resultado = (n0/n1);
    printf ("%f %c %f = %f \n\n",n0,c,n1,resultado);
    break;

    default:
    printf ("A operacao eh invalida.\n");
    loop = 1;
    break;
    }
    n0 = resultado;
}
    goto inicio;

return 0;
}
