#include "Students.c"

void remove_Stu(Students *ptr_main ,int num ,int num_of_stud)
{

    for(int k = 0 ; k < num_of_stud ; k++)
    {
        if(num == ((ptr_main + k) -> Id))
           {
               free(ptr_main + k);
           }
    }

    printf("Student ID %d has been removed successfully from your database\n");

}
