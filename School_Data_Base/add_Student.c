#include "Students.c"
#include <stdlib.h>

Students *add_Student(Students *ptr_main ,int no ,int num_of_stud)
{
    Students *ptr_add;
    ptr_add = (Students *) realloc(ptr_main , no*sizeof(Students));

    if(ptr_add == NULL)
    {
        printf("Memory reallocation failed");
        exit(1); // exit the program
    }

    printf("You database space has been extended for more %d students\n" ,no);

    // scan the new students

    for(int i = num_of_stud ; i <= no ; i++)
    {
        printf("Please enter the new student data \n");
        printf("Student %d name: " ,i);
        scanf("%d" ,(ptr_add + i) -> Name);

        printf("Student %d ID: " ,i);
        scanf("%d" ,&(ptr_add + i) -> Id);

        printf("Student %d Grades: \n" ,i);
        for(int j=0 ; j<5 ;j++)
        {
            printf("Grade of subject %d: " ,j+1);
            scanf("%d" ,&(ptr_add + i) -> Grades[j]);
        }
    }

    // print the new added students
    printf("\n \n The new added students are: ");

    for(int k = num_of_stud ; k <= no ; k++)
    {
        printf("Student %d name: %s\n" ,k ,(ptr_add + k) -> Name);

        printf("Student %d ID : %d\n" ,k ,(ptr_add + k) -> Id);

        printf("Student %d Grades entered: \n" ,k);
        for(int m = 0 ; m < 5 ; m++)
        {
            printf("Grade of subject %d: &d\n" ,m+1 ,(ptr_add + k) -> Grades[m]);
        }
    }

    return ptr_add;
}
