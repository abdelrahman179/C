 /********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/*   A function that check a frequency of a character   */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

int freq_character(char *string, char letter);
int main()
{
    char text[50];
    char letter;
    int c;

    printf("Enter a text: ");
    gets(text);

    printf("Enter a character to check its frequency: ");
    scanf("%c", &letter);

    c = freq_character(text,letter);

    printf("The letter %c frequency is %d", letter, c);
    return 0;
}
