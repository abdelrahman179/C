/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*        Solving equation ax^2 + bx + c = 0            */
/*        x1 = (-b + sqrt(b^2 - (4*a*c))/(2a)           */
/*        x2 = (-b - sqrt(b^2 - (4*a*c))/(2a)           */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double a , b , c , part , x1 , x2 , real , imagine;
    printf("To solve the equation ax^2 + bx + c = 0 > Enter values of a, b, c sequentially\n");

    scanf("%lf  %lf  %lf" ,&a ,&b ,&c);
    // part = (b^2 - (4*a*c))
    part = b*b - 4*a*c;

    // real and different results
    if(part > 0)
    {
        x1 = (-b + sqrt(part)) / (2*a);
        x2 = (-b - sqrt(part)) / (2*a);
        printf("x1 = %.4lf  and x2 = %.4lf" ,x1,x2);
    }
    // real and equal results
    else if(part == 0)
    {
        x1 = x2 = -b / (2*a);
        printf("x1 = x2 = %.4lf;", x1);
    }
    // results not equal
    else
    {
        real = -b / (2*a);
        imagine = sqrt(-part) / (2*a);
        printf("x = %.3lf + %.3lfi and x2 = %.3f - %.3fi", real, imagine, real, imagine);
    }
    return 0;
}
