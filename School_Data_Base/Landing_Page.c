#include "Students.c"

Students *home_Page(Students *ptr_main ,int m ,int num_of_stud)
{
    int admin_pass,k,num,no;

    Students *ptr_home;

    switch(m)
    {
        case 1: print_Data(ptr_main , num_of_stud);   break;

        case 2: printf("Please enter the administrator password: ");
                scanf("%d" ,&admin_pass);

                if(admin_pass == 5678)
                   {
                        printf("Choose one of the following options\n"
                               " 1- Add new student\t 2- Remove Student ");
                        scanf("%d", &k);
                        switch(k)
                        {
                            case 1: printf("How many students you want to add? ");
                                    scanf("%d" ,&no);
                                    ptr_home = add_Student(ptr_main ,no ,num_of_stud);

                                break;

                            case 2: printf("Enter student Id you want to remove: ");
                                    scanf("%d" ,&num);
                                    remove_Stu(ptr_main ,num, num_of_stud);

                                break;

                            default: printf("Invalid Input");
                                break;
                        }
                   }
                else
                    printf("Wrong password. please call the customer service for help");

            break;

        default: printf("Invalid Input");
                break;
    }

    return ptr_home;
}
