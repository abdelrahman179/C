#include "Students.c"

void fill_database(Students *p , int num)
{
    for(int i = 0 ; i < num ; i++)
        {
            printf("\nStudent %d name: " ,i+1);
            scanf("%s" ,&(p + i) -> Name);

            printf("Student %d ID: " ,i+1);
            scanf("%d" ,&(p + i) -> Id);

            printf("Student %d Grades: \n" ,i+1);

            for(int j = 0 ; j < 5 ; j++)
            {
                printf("\tGrade of subject %d: " ,j + 1);
                scanf("%d" ,&(p + i) -> Grades[j]);
            }

        }
    printf("\n You've successfully created student database consists of %d students \n\n\n", num);

}
