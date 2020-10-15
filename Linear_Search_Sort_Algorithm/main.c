
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Linear Search sort algorithms                */
/*********************************************************/


#include <stdio.h>

void main(void)
{
	int array[5]={5,7,9,3,2};
	int i,search,flag=0;
	
	printf("Please Enter a number to search its existance: ");
	scanf("%d",&search);
	
	for (i=0;i<5;i++)
	{
		if (array[i] == search)
		{
			printf("number exists at index=%d" ,i);
			flag=1; // to let the code knows at this case that var has changed 
			break; // to get out of the loop
		}
		
	}if (flag !=1) 
	{
		printf("number not exists");
	}
	
}
