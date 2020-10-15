
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : C program that takes number of structs       */
/*          and display length of each one dynamically   */
/*********************************************************/


#include <stdio.h>
#include <stdlib.h>
#include "struct.c"

int main()
{
    int size;
    display *ptr;

    printf("Enter number of structures you want allocate: ");
    scanf("%d" ,&size);

    ptr = (display *) malloc(size * sizeof(display));

    printf("%d" ,size*sizeof(display));

    return 0;
}
