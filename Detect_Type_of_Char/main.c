/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*   A function that check if the character entered     */
/*        by the user is normal or extended key         */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

void check_Key(int k);

int main()
{
    int key;
    printf("Press any key to check the character entered: ");

    // getting the pressed key and save the returned int value in key variable
    key = getc(stdin);

    check_Key(key);

    return 0;
}
