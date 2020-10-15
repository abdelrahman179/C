/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*  A function that removes all characters in a string  */
/*              except Alphabets                        */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

char *rem(char *s);

int main()
{
    char str[30];

    printf("Enter a string: ");

    gets(str);

    char *ptr = rem(str);

    printf("The new string is: %s" ,ptr);

    return 0;
}
