/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*        program to count the number of words and      */
/*         number of alphabets in text entered          */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[200];
    int i , w_Count = 0 , a_Count = 0 ,j;

    printf("Enter the text: \n");
    scanf("%[^\n]text", text);

    for (i=0 ; text[i] != '\0' ; i++)
    {
        if (text[i] == ' ' && text[i+1] != ' ')
            w_Count++;
    }

    for (j=0 ; text[j] != '\0' ; j++)
    {
        if (text[j] == ' ')
           continue;
           a_Count++;
    }
    printf("Number of words in given text are: %d\n", w_Count + 1);
    printf("Number of Alphabets in given text are: %d\n", a_Count);

    return 0;
}
