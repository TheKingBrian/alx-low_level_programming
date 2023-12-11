#include "main.h"
/**
 * _strcpy - duplicatesall values
 * @src: where to copy string
 * @dest: string to be copied
 * Return: searches it all
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(dest + len) = *(src + len);
++len;
}
*(dest + len) = '\0';
return (src);
}
