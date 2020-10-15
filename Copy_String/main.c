
/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*   A function that copies a string without strcpy     */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy_String(char* str , char* cop);

int main()
{
    char str1[50], copied_str[50];

    printf("Enter a string: ");

    gets(str1);

    copy_String(str1 , copied_str);

    printf("The string copied is: %s" ,copied_str);


    return 0;
}


/********************************************************/
/*                                                      */
/*   A function that copies a string with strcpy        */
/*                                                      */
/********************************************************/

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Enter a string: ");

    gets(str1);

    strcpy(str2 , str1);

    puts(str2);

    return 0;
}*/



