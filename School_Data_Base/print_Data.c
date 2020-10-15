#include "Students.c"

void print_Data(Students *ptr_main, int num_of_stud)
{
    int id;

    printf("Enter your ID: ");
    scanf("%d" ,&id);

    for(int i=0 ; i<num_of_stud ;i++)
    {
        if(id == ((ptr_main + i) -> Id))
           {
               printf("Welcome %s, your Grades are: \n" ,(ptr_main + i) -> Name);
               for(int j=0 ; j<5 ; j++)
                printf("\t\tGrade of subject %d: %d\n" ,j + 1 ,(ptr_main + i) -> Grades[j]);
           }
    }

}

