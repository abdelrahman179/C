
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Program that identifies the student degree   */
/*********************************************************/


include <stdio.h>
#include <stdlib.h>

/********************  Method 1 ************************/
/*int main()
{
    char degree;
    printf("Enter your degree to get the corresponding grade: ");
    scanf("%c" ,&degree);

    // switch case to switch among the decimal value of the input degree
    switch(degree)
    {
    case 65: // ASCII 65 >> A
        printf("Your grade is Excellent");
        break;
    case 66: // ASCII 66 >> B
        printf("Your grade is V.Good");
        break;
    case 67: // ASCII 67 >> C
        printf("Your grade is Good");
        break;
    case 68: // ASCII 68 >> D
        printf("Your grade is Fair");
        break;
    case 69: // ASCII 69 >> F
        printf("Your grade is Failed");
        break;
    default: // Wrong input
        printf("You entered wrong degree");
        break;
    }

    return 0;
}*/

/********************  Method 2 ************************/
/*int main()
{
    char degree;
    printf("Enter your degree to get the corresponding grade: ");
    scanf("%c" ,&degree);

    // switch case to switch among the decimal value of the input degree
    switch(degree)
    {
    case 'A':
        printf("Your grade is Excellent");
        break;
    case 'B':
        printf("Your grade is V.Good");
        break;
    case 'C':
        printf("Your grade is Good");
        break;
    case 'D':
        printf("Your grade is Fair");
        break;
    case 'F':
        printf("Your grade is Failed");
        break;
    default: // Wrong input
        printf("You entered wrong degree");
        break;
    }

    return 0;
}*/

/********************  Method 3 ************************/
int main()
{
    int degree;
    printf("Enter your degree to get the corresponding grade: ");
    scanf("%d" ,&degree);

    if(degree > 85)
        printf("Your grade is Excellent 'A' ");
    else if(degree <= 85 && degree > 75)
        printf("Your grade is V.Good 'B' ");
    else if(degree <= 75 && degree > 65)
        printf("Your grade is Good 'C' ");
    else if(degree <= 65 && degree > 50)
        printf("Your grade is Fair 'D' ");
    else
        printf("You're failed");
}
