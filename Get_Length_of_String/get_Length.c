int get_Length(char *string)
{
    static int count;

    for(int i = 0 ; string[i] != '\0' ; i++)
    {
        count++;
    }

    return count;
}
