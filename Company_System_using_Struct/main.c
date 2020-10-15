
/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : A structure for employees that contains      */
/*    theirinfo. The program shall ask the user to       */
/*   enter these information for three employees.        */
/*      Then the program will print the total value      */
/*      shall be supplied by finance team                */
/*********************************************************/

#include <stdio.h>

typedef unsigned short int u16;

struct Employee
{
	u16 salary;
	u16 bonus;
	u16 deduction;
}Ahmed,Amr,Waleed;

void main(void)
{
	u16 Total=0;
	printf("Please Enter Ahmed Salary: ");
	scanf("%d" ,&Ahmed.salary);
	printf("Please Enter Ahmed Bonus: ");
	scanf("%d" ,&Ahmed.bonus);
	printf("Please Enter Ahmed Deduction: ");
	scanf("%d" ,&Ahmed.deduction);
	printf("Please Enter Waleed Salary: ");
	scanf("%d" ,&Waleed.salary);
	printf("Please Enter Waleed Bonus: ");
	scanf("%d" ,&Waleed.bonus);
	printf("Please Enter Waleed Deduction: ");
	scanf("%d" ,&Waleed.deduction);
	printf("Please Enter Amr Salary: ");
	scanf("%d" ,&Amr.salary);
	printf("Please Enter Amr Bonus: ");
	scanf("%d" ,&Amr.bonus);
	printf("Please Enter Amr Deduction: ");
	scanf("%d" ,&Amr.deduction);
	
	Total = (Ahmed.salary + Amr.salary + Waleed.salary + Ahmed.bonus + Amr.bonus + 
	          Waleed.bonus - Ahmed.deduction - Amr.deduction - Waleed.deduction);
    printf("Total Value Required is %d" ,Total);
	
} */

//********************************************** Another Solution 

/* #include <stdio.h>

typedef unsigned short int u16;

typedef struct
{
	u16 Salary    ;
	u16 Bonus     ;
	u16 Deduction ;
}Employee;

void main(void)
{
	Employee Ahmed,Amr,Waleed;
	u16 Total=0; 
	printf("Please Enter Ahmed Salary: ");
	scanf ("%d",&Ahmed.Salary);
	printf("Please Enter Ahmed Bonus: ");
	scanf ("%d",&Ahmed.Bonus);
	printf("Please Enter Ahmed Deduction: ");
	scanf ("%d",&Ahmed.Deduction);
	
	printf("Please Enter Amr Salary: ");
	scanf ("%d",&Amr.Salary);
	printf("Please Enter Amr Bonus: ");
	scanf ("%d",&Amr.Bonus);
	printf("Please Enter Amr Deduction: ");
	scanf ("%d",&Amr.Deduction);
	
	printf("Please Enter Waleed Salary: ");
	scanf ("%d",&Waleed.Salary);
	printf("Please Enter Waleed Bonus: ");
	scanf ("%d",&Waleed.Bonus);
	printf("Please Enter Waleed Deduction: ");
	scanf ("%d",&Waleed.Deduction);
	
	Total = (Ahmed.Salary + Amr.Salary + Waleed.Salary + Ahmed.Bonus
	         + Amr.Bonus + Waleed.Bonus - Ahmed.Deduction - Amr.Deduction
			 - Waleed.Deduction);
	
	printf("Total Value Needed is %d",Total);
} */

// *************************************************  Another Solution  
/*#include <stdio.h>
typedef unsigned short int u16;
typedef struct
{
	u16 Salary;
	u16 Bonus;
	u16 Deduction;
}Employee;

void main(void)
{
	   Employee Ahmed, Amr, Waleed;
	   Employee array[3] = {Ahmed , Amr , Waleed};
	   for(u16 i=0;i<3;i++)
	     {
	       printf("Please Enter employee %d Salary: " ,i);
	       scanf("%d",&array[i].Salary);
	       printf("Please Enter employee %d Bonus: " ,i);
	       scanf ("%d",&array[i].Bonus);
	       printf("Please Enter employee %d Deduction: " ,i);
	       scanf ("%d",&array[i].Deduction);
	     }  
		 u16 Total=0; 
		 Total = (array[0].Salary + array[1].Salary +  array[2].Salary + array[0].Bonus
	         +  array[1].Bonus + array[2].Bonus - array[0].Deduction -  array[1].Deduction
			 - array[2].Deduction);
	
	     printf("Total Value Needed is %d",Total);
	
		 
}*/
