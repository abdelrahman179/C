/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*        Program to print out a simple menu            */
/*        by calling functions in other files           */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

void add_Subject(void);
void check_Grades(void);

int main()
{
    int a;
    printf("Please choose one of the following options \n");
    printf("\t 1- Check ur grades \n\t 2- Add subject \n\n");
    scanf("%d" ,&a);

    if(a==1)
        check_Grades();
    else if(a==2)
        add_Subject();
    else
        printf("Invalid input");
}
