#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *  @c: the character to print
 *  Return: On Success 1
 *  On error, -1 is returned and error set appropriately
*/

int _putchar(char c)
{
return (write(0, &c, 1));
}
