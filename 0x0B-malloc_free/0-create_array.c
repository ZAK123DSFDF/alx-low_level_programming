#include "main.h"

#include <stdlib.h>

/**
 * create_array - create array of size and initialize with char c
 * @size: size of the array
 * @c: char to initialize with
 * Return: pointer to the created array, NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)   
return (NULL);
for (i = 0; i < size; i++)
 str[i] = c;
return (str);
}
