
/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*   A function that find the length of a string        */
/*            with strlen()                             */
/*                                                      */
/********************************************************/

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter a string to get its length: ");

    gets(str);

    int size = strlen(str);

    printf("The size of the text is %d" ,size);


    return 0;
}*/


/********************************************************/
/*                                                      */
/*   A function that find the length of a string        */
/*            without strlen()                          */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_Length(char *string);
int main()
{
    char str[20];

    printf("Enter a string to get its length: ");

    gets(str);

    int size = get_Length(str);

    printf("The size of the text is %d" ,size);

    return 0;
}



