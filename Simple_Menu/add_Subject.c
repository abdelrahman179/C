void add_Subject(void)
{
    int a,b;
    char subject[20];
    printf("Your subjects are: \n");
    printf("\t Math.\n \t Physics \n \t Chemistry \n \t English \n");

    printf("Press 1 to add subject\n");
    scanf("%d" ,&a);

    if(a==1)
    {
        printf("Choose one of the following subjects: \n \t - French \n \t - Programming \n \t - Arabic \n");
        scanf("%s" ,subject);
        printf("You successfully added a new subject, Your subjects are: \n");
        printf("\t Math.\n \t Physics \n \t Chemistry \n \t English \n \t NEW >> %s" ,subject);
    }else{printf("invalid input");}

}
