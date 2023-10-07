#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code anytime 
 *
 * Return: Always 0 and return success.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
