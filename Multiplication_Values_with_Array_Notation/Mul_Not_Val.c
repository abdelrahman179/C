int mul_elements(int *arr , int s)
{
    int res = 1;

    // address of array notation
    for(int i = 0 ; i< s ; i++)
        res *= *(&arr[i]);

    return res;
}
