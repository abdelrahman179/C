
void check_Key(int k)
{
    if((k >= 32 && k < 127))
        printf("The character < %c > entered is NORMAL" ,k);
    else if ((k >= 128 && k <= 255))
        printf("The character < %c > entered is EXTENDED" ,k);
    else
        printf("The key pressed < %c > is a control key" ,k);
}
