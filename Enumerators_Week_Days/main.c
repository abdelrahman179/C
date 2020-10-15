/*********************************************************/
/* Author : AbdElrahman I.Zaki                           */
/* Desc.  : Enumerators
/*********************************************************/

#include <stdio.h>

enum day {sun , mon , tue , wed , thu , fri , sat}; //declare type 

void print_day(enum day d)
{
	switch(d)
	{
		case sun : printf(" Sunday ");           break; 
		case mon : printf(" Monday ");           break; 
		case tue : printf(" Tuesday ");          break; 
		case wed : printf(" Wednesday ");        break; 
		case thu : printf(" Thursday ");         break; 
		case fri : printf(" Friday ");           break; 
		case sat : printf(" Saturday ");         break; 
		default  : printf(" %d is an error" ,d); break; 
	}
}

enum day next_day(enum day d)
{
	return (d + 1 % 7);
}

int main ()
{
	enum day today = fri;   // create a variable (today) of type enum day 
	print_day(today); // pass the variable value to function print_day 
	printf("\n\n");
	print_day(7);  // pass number 7 which not exist in the enum
	printf("\n\n");
	print_day(next_day(today)); // pass to function print_dat a function next_day taking an argument today
	printf("\n\n");
	return 0;
}
