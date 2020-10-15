
void check_Grades(void)
{
    int id,pass;

    printf("Enter your ID: ");
    scanf("%d" ,&id);

    if(id == 5254)
    {
        printf("Enter your pass: ");
        scanf("%d" ,&pass);

        if(pass == 1234)
        {
            printf("We're logging in your account, please wait....\n");
        }
        else
        {
             do
             {
                printf("You entered invalid pass, please try again. \n");
                printf("Enter your password: ");
                scanf("%d" ,&pass);
             }while(pass!=1234);

            printf("We're logging in your account, please wait....\n");
        }
    }

    else
    {
        do
        {
            printf("You entered invalid Id, please try again. \n");
            printf("Enter your Id: ");
            scanf("%d" ,&id);
        }while(id!=5254);

        printf("Enter your pass: ");
        scanf("%d" ,&pass);

        if(pass == 1234)
        {
            printf("We're logging in your account, please wait....\n");
        }
        else
        {
             do
             {
                printf("You entered invalid pass, please try again. \n");
                printf("Enter your password: ");
                scanf("%d" ,&pass);
             }while(pass!=1234);

            printf("We're logging in your account, please wait....\n");
        }
    }

    printf("Welcome AbdElrahman Ibrahim Zaki\n");
    printf("Your grades are: \n\t Physics: V.Good \n\t Math.: Excellent \n\t Chemistry: Good \n\n\t Good Luck....\n");


}
