#include "main.h"
#include "stdio.h"
/**
 * putchar . writes the character of r to the stdout
 *
 * @c: The character to print
 *
 * Return:On success 1
 *
 * On error, -1 is returned, and arrow is set appropriately
 */

int _putchar(char c)

{
	return(write(1, &c, 1));
}
