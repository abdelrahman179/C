/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*      Check whether an array has a duplicated         */
/*                elements or not                       */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

void chk_Dup(int arr[] ,int s);

int main()
{
    int size;
    // get the size of the array
    printf("Please enter size of the array: ");
    scanf("%d" ,&size);

    int arr[size];
    for(int i=0 ; i < size ;i++)
        {
            printf("Enter element %d : " ,i);
            scanf("%d" ,&arr[i]);
        }

    chk_Dup(arr , size);


    return 0;
}
