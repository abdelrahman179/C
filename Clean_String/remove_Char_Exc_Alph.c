
char *rem(char *s)
{
    static char new_str[50];
    int count = 0;

    for(int i=0 ; s[i] != '\0' ; i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] == ' '))
            new_str[i - count] = s[i];
        else
            count++;
    }

    return new_str;
}
