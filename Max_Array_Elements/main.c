/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*     Get the max/min num of the elements              */
/*       of an array entered by the user                */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

int* get_Max_Min(int arr[] , int s);
int main()
{
    int size,i, *ptr;
    // scan the size of the array from the user
    printf("Enter numbers to get max and min among them : ");
    scanf("%d" ,&size);
    int arr[size];

    // loop to scan the array elements from the user
    for(i=0 ; i < size ; i++)
    {
        printf("Num %d : " ,i);
        scanf("%d" ,&arr[i]);
    }

    // ptr that holds the address of the return array
    ptr = get_Max_Min(arr , size);

    // print the 2nd element of the array which is the min
    printf("Min value is %d\n", *ptr++);

    // print the 1st element of the array which is the max
    printf("Max value is %d\n", *ptr);



    return 0;
}
