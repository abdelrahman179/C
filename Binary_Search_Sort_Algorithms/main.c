
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Binary Search Sorting Algorithms             */
/*********************************************************/


#include <stdio.h>
void main(void)
{
	int array[10];
	int size = 10;
	int i,j,z,search;
	int start, end, medium;
	int FoundFlag = 0;

//-------------------------- Scan the Values 
	// Scan the values loop 
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:  ",i);
		scanf ("%d",&array[i]);
	}

//------------------- Sort the Values using bubble sorting 	
	// Sort the values using Bubble sorting 
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++) 
		{
			if(array[j] > array[j+1])
			{
				// Swap 
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}
//--------------- Scan the value to search
	printf("Please Enter number to search:  ");
	scanf ("%d",&search);
	
//--------------- Binary Search 

	// start with the middle of the array 
	start  = 0;
	end = size-1;
	
	while ( start <= end )
	{
		// always go to the middle of the array 
		medium = start + (end-start)/2;
		
		if ( search == array[medium] )
		{
			FoundFlag =1;
			break;
		}
		
		else if ( search > array[medium] )
			start = medium + 1;
		
		else
			end = medium - 1;
	}
	
	if (FoundFlag == 1)
		printf("Value is Found");
	else
		printf("Value Not Exist");
	
}
