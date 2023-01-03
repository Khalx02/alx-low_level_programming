#include "main.h"
#include <stdio.h>
/**
 * putchar . writes the character r to stdout
 * @c: the character to print 
 *
 * return: On success 1
 * On error, 1 is returned, and error is returned appropriately.
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
