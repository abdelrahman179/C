
/**********************************************************/
/* Author : AbdElrahman I.Zaki                            */
/* Desc.  : a school database that gives the options of   */
/*             creating database, printing student grades */
/*             administrator mode to add and remove       */
/*             data using dynamic memory allocation       */
/**********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "Students.c"

void fill_database(Students *p , int num);
void print_Data(Students *ptr_main, int num_of_stud);
Students *home_Page(Students *ptr_main ,int m ,int num_of_stud);
Students *add_Student(Students *ptr_main ,int no ,int num_of_stud);
void remove_Stu(Students *ptr_main ,int num ,int num_of_stud);

int main()
{
    int num_of_Students = 0;
    int mode;

    Students *ptr;

    printf("Welcome to the school data base\n\n Please enter the number of students: ");
    scanf("%d" ,&num_of_Students);

    ptr = (Students *) malloc(num_of_Students * sizeof(Students));

    fill_database(ptr ,num_of_Students);

    printf("Please choose on of the following options: \n"
           "\t 1- Student Mode \t 2- Administrator Mode ");
    scanf("%d", &mode);

    ptr = home_Page(ptr , mode , num_of_Students);

    free(ptr);


    return 0;
}
