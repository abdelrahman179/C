/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*         Program to display Magic Square              */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // get the odd size of the magic square
    int n;
    do
    {
        printf("Enter the odd size of the Magic Square: ");
        scanf("%d" ,&n);
    }while(n %2 == 0);

    int magicSquare[n][n];

    // set all slots as 0
    memset(magicSquare, 0, sizeof(magicSquare));

    // Set position of 1
    int i = n / 2;
    int j = n - 1;

    // set square box values
    for (int num = 1; num <= n * n;)
    {
        if (i == -1 && j == n)
        {
            j = n - 2;
            i = 0;
        }
        else
        {
            if (j == n)
                j = 0;

            if (i < 0)
                i = n - 1;
        }
        if (magicSquare[i][j])
        {
            j -= 2;
            i++;
            continue;
        }
        else
            magicSquare[i][j] = num++;

        j++;
        i--;
    }

    printf("magic square of %d number of rows and columns and sum of %d: \n" ,n ,n*(n*n+1)/2);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%3d ", magicSquare[i][j]);
            printf("\n");
    }



    return 0;
}
