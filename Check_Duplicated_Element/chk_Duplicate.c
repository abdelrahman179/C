void chk_Dup(int arr[] ,int s)
{
    int ch_E = 0;
    for(int i=0 ; i<s ;i++)
    {
      for(int j=i+1; j < s; j++)
        {
          if(arr[i] == arr[j])
              {
                  printf("YES, the duplicate number: %d ", arr[i]);
                  ch_E = 1;
              }

        }
    }
     if(ch_E != 1)
        printf("No duplicated numbers");
}
