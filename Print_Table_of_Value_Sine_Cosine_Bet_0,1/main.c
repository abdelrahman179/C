
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : A program that prints a table of values for  */
/*              sine and cosine between (0, 1)           */
/*********************************************************/




#include<stdio.h>
#include<math.h>

int main(void)
{
        double Range, x ,y;
		
		// for loop to count from 0 - 17 to get the max number < 1
		
        for(int i=0 ; i <= 15 ; i++)
        {
			
            Range = i/10.0;   // float range between 0.00 to 1.7 
			
            x = sin(Range);   // call sin function and assign the value of variable Range to x
			
            y = cos(Range);   // call cos function and assign the value of variable Range to y
         
            printf("cos(%lf) = %lf \t sin(%lf) = %lf \n"  ,Range ,y ,Range ,x ); 
            
        }

        return 0;
}
