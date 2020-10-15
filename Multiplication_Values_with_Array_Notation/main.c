
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : C program that takes an array values         */
/*                and pass it to                         */
/*      a function that multiply the elements using      */
/*                array & pointer notation               */
/*********************************************************/

#include <stdio.h>
#include <stdlib.h>

int mul_elements(int *arr , int s);

int main()
{
    int size, result;
    printf("Enter the array size: ");
    scanf("%d" ,&size);

    int array[size];

    int *ptr = array;

    // scan the array elements with pointer notation
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter element %d >>  " ,i);
        scanf("%d" ,ptr + i);
    }

    result = mul_elements(array , size);

    printf("The result of multiplying array elements is %d" ,result);

    return 0;
}
