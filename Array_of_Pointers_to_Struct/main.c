
/*******************************************************************/
/* Author : AbdElrahman I.Zaki                                     */
/* Desc.  : C program that has array of pointers to structure      */
/*******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "employee.c"

int main()
{
    employee *ptr[10];
    int size;

    printf("How many employees you want to add their info ?");
    scanf("%d" ,&size);


    // scan and allocate the array of pointers in Heap
    for(int i=0 ; i<size ; i++)
    {
        ptr[i] = (employee *) malloc(size*sizeof(employee));

        printf("\t Enter employee %d name: " ,i+1);
        scanf("%s" ,&ptr[i] -> Name);

        printf("\t Enter employee %d age: " ,i+1);
        scanf("%d" ,&ptr[i] -> Age);

        printf("\t Enter employee %d salary: " ,i+1);
        scanf("%d" ,&ptr[i] -> Salary);
    }

    printf("\n ****************************** \n");
    // print out the employees data entered

    for(int j=0 ; j<size ; j++)
    {
        printf("\t Employee %d name: %s\n" ,j+1 ,ptr[j] -> Name);

        printf("\t Employee %d age: %d\n" ,j+1 ,ptr[j] -> Age);

        printf("\t Employee %d salary: %d\n" ,j+1 ,ptr[j] -> Salary);
    }

    free(ptr);

    return 0;
}
