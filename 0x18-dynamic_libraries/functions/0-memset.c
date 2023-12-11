#include "main.h"
/**
 * _memset - fills all the memory slots
 * @s: pointer to memory area
 * @b: constant byte
 * @n: byte size
 * Return:is the relevent memory keeper
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
{
*p++ = b;
}
return (s);
}
