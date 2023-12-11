#include "main.h"
/**
 * _memcpy - collecsall the memories
 * @dest: pointer to memory area to be copied
 * @src: pointer to memory area where to copy
 * @n: byte size
 * Return:shows all the memory areas
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *pdest = dest;
while (n--)
*pdest++ = *src++;
return (dest);
}
