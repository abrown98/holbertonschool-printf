#include <unistd.h>

/**
 * return c to standard output
 *
 */

int putchar(char c)
{
return (write(1, &c, 1)
