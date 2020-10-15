/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : An array of 10 elements and assign           */
/* random grades for students. The system will           */
/* ask the user to enter the student ID then the         */
/* system will show its grades. The software shall       */
/* manage wrong IDs.                                    */
/*********************************************************/

#include <stdio.h>

typedef unsigned char u8;

typedef struct 
{
	u8 Math;
	u8 Chemistry;
	u8 Physics;
	u8 Language;
}Student;

void main(void)
{
	 u8 ID;
	 Student Class[10]= { 
		 {70,80,75,90}, 
		 {65,85,95,92},
	   {73,82,77,79},
		 {81,83,79,87},
		 {92,89,86,85},
		 {88,81,90,91},
		 {55,62,71,69},
		 {97,95,93,98},
		 {77,86,78,82},
	     {80,90,88,82}};
		 
		 printf("Please enter student ID: ");
		 scanf("%d" ,&ID);
		 
		 if (ID <10)
		 {
			printf("Your Math Grade is %d\n" ,Class[ID].Math);
			printf("Your Chemistry Grade is %d\n" ,Class[ID].Chemistry);
			printf("Your Physics Grade is %d\n" ,Class[ID].Physics);
			printf("Your Language Grade is %d\n" ,Class[ID].Language);
		 }
		 else
	     {
	    	printf("Student ID is not correct");
	     }
}
