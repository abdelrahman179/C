int* get_Max_Min(int Array[] , int S)
{
    /* declare static array not to be removed after the function done with implementation
       an array that holds the max and min numbers */
    static int Max_Min[2];

    // initialize the max_min_array with the 1st element of the other array as a start point
    Max_Min[0] = Array[0];
    Max_Min[1] = Array[0];

    // loop among the array variable to get the max/min
    for(int i=1 ; i < S ;i++)
    {
        // get the max number
        if(Max_Min[0] > Array[i])
            Max_Min[0] = Array[i];

        // get the min number
        if(Max_Min[1] < Array[i])
            Max_Min[1] = Array[i];
    }

    return Max_Min;
}
