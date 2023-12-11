#include "main.h"
#include <string.h>
/**
 * _strpbrk -  looks fir string values
 * @s: pointer to string
 * @accept: substring to be located
 * Return: a collecter of strings
 */
char *_strpbrk(char *s, char *accept)
{
if ((s == NULL) || (accept == NULL))
return (NULL);
while (*s)
{
if (strchr(accept, *s))
{
return (s);
}
else
{
s++;
}
}
return (NULL);
}
