#include "main.h"
#include <string.h>
/**
 * _strspn - counts the strings
 * @s: pointer to string
 * @accept: substring to be located
 * Return: places digital numbers
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
if ((s == NULL) || (accept == NULL))
return (len);
while (*s && strchr(accept, *s++))
{
len++;
}
return (len);
}
