int freq_character(char *string, char let)
{
    static int count = 0;

    for(int i=0 ; string[i] != '\0' ; i++)
    {
        if(string[i] == let)
            count++;
    }
    return count;
}
