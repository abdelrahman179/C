#include <stdlib.h>

char *string_read(char *msg)
{
    char *ptr;
    char name[100];

    printf("%s", msg);

    scanf("%s", name);

    // allocate memory location size of char + length of the array
    ptr = (char*) malloc(strlen(name) + sizeof(char));

    // copy the input string into the array that the pointer points to
    strcpy(ptr, name);

    return ptr;
}
