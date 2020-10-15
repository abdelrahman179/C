/********************************************************/
/* Author : AbdElrahman I.Zaki                          */
/*    A function that takes a string dynamically        */
/*                                                      */
/********************************************************/

#include <stdio.h>
#include <stdlib.h>

char *string_read(char *msg);

int main ()
{
   char *first_N, *last_N;

   printf(" Enter your name\n");

   first_N = string_read("First name : ");

   last_N = string_read("Last name : ");

   printf("Hello, %s %s \n", first_N, last_N);

   free(first_N);

   free(last_N);

   return 0;

}
