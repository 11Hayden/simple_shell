#include "main.h"

/**
* read_line - reads the input string.
* @eof: return value of getline function
* Return: input string
*/
char *read_line(int *eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*eof = getline(&input, &bufsize, stdin);
return (input);
}
