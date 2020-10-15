/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Simple Calculator                            */
/*********************************************************/

#include <stdio.h>
float num1, num2, result;
char operator;
float calculation(float num1, float num2, float result, char operator);
void main(void)
{
	printf("enter n1:  ");
	scanf("%f", &num1);
	printf("enter n2: ");
	scanf("%f", &num2);
	printf("Enter the operator (+,-,*,/):  ");
	scanf(" %c" ,&operator);  
    calculation();
    printf("Result=%d" ,result);	
	// put a space before  %c as Enter key in the ASCII code is an operation. 
   // Otherwise, the operation will not be proccessed.
}

float calculation(float num1, float num2, float result, char operator)
{
	 switch (operator) {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;
    case '/':
        result = num1/num2;
        break;
    default:
        printf("Error! operator is not correct");
    }
    return 0;
}*/
