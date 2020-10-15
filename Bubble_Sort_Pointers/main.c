/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Bubble Sorting Algorithms                    */
/*********************************************************/

#include <stdio.h>
void bubble_sort(int* Arr, int size);
void main(void)
{
	int arr[5];
	int i;
	printf("please enter five elements: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d" ,(arr+i));
	}
	bubble_sort(arr,5);
	for (i=0;i<5;i++)
	{
		printf("%d" ,*(arr+i));
	}
}
void bubble_sort(int *Arr, int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(*(Arr+i) > *(Arr+i+1))
			{
				temp=*(Arr+i);
				*(Arr+i)=*(Arr+i+1);
				*(Arr+i+1)=temp;
			}
		}
	}
}
