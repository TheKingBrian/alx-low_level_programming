#include <unistd.h>
/**
 * _putchar - writes all known characters
 * @c: The character to print
 * Return: 1 is the succesof the program.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
